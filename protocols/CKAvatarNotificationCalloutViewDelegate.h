
@protocol CKAvatarNotificationCalloutViewDelegate <NSObject>

@required

- (void)avatarNotificationCalloutViewDidFinishFadeOut:(CKAvatarNotificationCalloutView *)arg1;
- (void)avatarNotificationCalloutViewWillFadeIn:(CKAvatarNotificationCalloutView *)arg1;

@optional

- (void)avatarNotificationCalloutViewReceivedTouch:(CKAvatarNotificationCalloutView *)arg1;

@end
