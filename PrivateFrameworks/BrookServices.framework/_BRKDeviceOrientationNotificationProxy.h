
@interface _BRKDeviceOrientationNotificationProxy : NSObject

@property (nonatomic, readonly) bool crownOrientationIsRight;
@property (nonatomic, readonly) bool wristOrientationIsRight;

+ (id)sharedInstance;

- (void)_logCurrentState;
- (void)_postChangeNotification:(id)arg1;
- (void)_postNotification;
- (bool)crownOrientationIsRight;
- (id)init;
- (bool)wristOrientationIsRight;

@end
