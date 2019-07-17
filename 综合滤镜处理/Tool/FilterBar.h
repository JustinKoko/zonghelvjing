//
//  FilterBar.h
//  001--滤镜处理
//
//  Created by CC老师 on 2019/4/23.
//  Copyright © 2019年 CC老师. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FilterBar;

@protocol FilterBarDelegate <NSObject>

- (void)filterBar:(FilterBar *)filterBar didScrollToIndex:(NSUInteger)index;

@end

@interface FilterBar : UIView

@property (nonatomic, strong) NSArray <NSString *> *itemList;

@property (nonatomic, weak) id<FilterBarDelegate> delegate;

@end
