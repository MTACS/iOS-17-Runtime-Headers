
@interface HMDDeviceLockStateDataSource : HMFObject

@property (readonly) bool isLocked;
@property (readonly) bool isPasscodeEnabled;

- (bool)isLocked;
- (bool)isPasscodeEnabled;

@end
