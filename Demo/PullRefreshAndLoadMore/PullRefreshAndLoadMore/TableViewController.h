//
//  TableViewController.h
//  PullRefreshAndLoadMore
//
//  Created by akin liu on 12-4-18.
//  Copyright (c) 2012年 hengxinsoft.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"

@interface TableViewController : UITableViewController <EGORefreshTableHeaderDelegate>

@property (nonatomic, strong) EGORefreshTableHeaderView *refreshTableHeaderView;

@end
