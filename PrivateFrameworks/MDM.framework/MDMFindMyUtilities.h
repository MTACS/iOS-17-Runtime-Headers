
@interface MDMFindMyUtilities : NSObject

+ (void)enableActivationLockWithCompletionHandler:(id /* block */)arg1;
+ (bool)isActivationLockOn;
+ (bool)isManagedLostModeActive;

@end
