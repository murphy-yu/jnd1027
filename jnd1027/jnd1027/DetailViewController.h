//
//  DetailViewController.h
//  jnd1027
//
//  Created by Murphy Yu on 2018/10/27.
//  Copyright © 2018 Murphy Yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

