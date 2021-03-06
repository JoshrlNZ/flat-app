//
//  NoticeDetailViewController.h
//  v9
//
//  Created by Gavin Trebilcock and copied by max and modiefied for chores lol tahnks gav x on 18/09/17.
//  Copyright © 2017 Max Newall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

@interface ChoreDetailViewController : UIViewController<UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField* choreSubjectText;
@property (nonatomic, strong) NSString *choreSubject;
@property (strong, nonatomic) IBOutlet UIDatePicker *choreDate;
@property (nonatomic, strong) NSDate *choreTime;
@property (nonatomic) NSInteger choreNumber;
@property (strong, nonatomic) UNMutableNotificationContent *localNotification;

- (IBAction)saveChore;

@end
