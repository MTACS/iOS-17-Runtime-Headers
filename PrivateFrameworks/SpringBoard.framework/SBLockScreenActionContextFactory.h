
@interface SBLockScreenActionContextFactory : NSObject

+ (id)sharedInstance;

- (id)lockScreenActionContextForAction:(id)arg1 fromPlugin:(id)arg2;
- (id)lockScreenActionContextForAlertItem:(id)arg1;
- (id)lockScreenActionContextForPlugin:(id)arg1;

@end
