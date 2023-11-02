
@protocol SBSoftLockoutControllerDelegate <NSObject>

@required

- (bool)requiresLockout;

@optional

- (bool)consumePendingUnlock;

@end
