//
//  ZBJSimpleRangeSelectionCell.h
//  ZBJCalendar
//
//  Created by gumpwang on 3/15/16.
//  Copyright © 2016 ZBJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef CF_ENUM(NSInteger, ZBJCalendarCellState) {
    ZBJCalendarCellStateEmpty,
    ZBJCalendarCellStateDisabled,
    ZBJCalendarCellStateAvaible,
    ZBJCalendarCellStateAvaibleDisabled,
    ZBJCalendarCellStateSelectedStart,
    ZBJCalendarCellStateSelectedMiddle,
    ZBJCalendarCellStateSelectedEnd,
};

typedef CF_ENUM(NSInteger, ZBJRangeCellStyle) {
    ZBJRangeCellStyle1 = 0,
    ZBJRangeCellStyle2,
};

@interface ZBJSimpleRangeSelectionCell : UICollectionViewCell

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, assign) ZBJCalendarCellState cellState;

@property (nonatomic, assign) ZBJRangeCellStyle cellStyle;
@end
