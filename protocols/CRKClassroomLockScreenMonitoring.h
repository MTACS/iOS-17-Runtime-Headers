
@protocol CRKClassroomLockScreenMonitoring <NSObject>

@required

- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
- (bool)isClassroomLockScreenVisible;

@end
