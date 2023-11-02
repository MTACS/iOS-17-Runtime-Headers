
@protocol _SFAccountManagerLockableContentContainer <NSObject>

@optional

- (void)passwordManagerWillLock;
- (bool)shouldSuppressAccountManagerLockedView;
- (void)updateUserAuthenticationState:(bool)arg1;

@end
