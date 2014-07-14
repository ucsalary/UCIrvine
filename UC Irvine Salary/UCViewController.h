//
//  UCViewController.h
//  UC Irvine Salary
//
//  Created by Ryan Garcia on 6/26/14.
//  Copyright (c) 2014 Nyquist Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UCTableView.h"

@interface UCViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITableView *resultView;




-(void)getTop10Salaries;
-(void)search:(NSString *)first and:(NSString *)last;

@end
