
@protocol ASBulletinPostingManagerDelegate <NSObject>

@required

- (void)bulletinPostingManager:(id <ASBulletinPostingManager>)arg1 didReceiveNotificationResponse:(ASUserNotificationResponse *)arg2;

@end
