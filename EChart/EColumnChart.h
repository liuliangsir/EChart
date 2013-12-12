//
//  EColumnChart.h
//  EChart
//
//  Created by Efergy China on 11/12/13.
//  Copyright (c) 2013年 Scott Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EColumn.h"
@class EColumnChart;

@protocol EColumnChartDataSource <NSObject>

- (NSInteger) numberOfColumnsInEColumnChart:(EColumnChart *) eColumnChart;
- (NSInteger) numberOfColumnsPresentedEveryTime:(EColumnChart *) eColumnChart;
- (float)     highestValueEColumnChart:(EColumnChart *) eColumnChart;

- (float)     eColumnChart:(EColumnChart *) eColumnChart
             valueForIndex:(NSInteger)index;
/**再提供一个定制column的接口，可以定制Ecolumn*/

@end


@protocol EColumnChartDelegate <NSObject>


@end



@interface EColumnChart : UIView

- (void)reloadData;

@property (weak, nonatomic) id <EColumnChartDataSource> dataSource;
@property (weak, nonatomic) id <EColumnChartDelegate> delegate;
@end
