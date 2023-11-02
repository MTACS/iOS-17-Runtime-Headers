
@protocol MPHomeManagerObserverDelegate <NSObject>

@required

- (void)currentHomeDidChange;
- (void)currentUserDidChange;
- (void)homeUsersDidChange;
- (void)soundCheckSettingDidUpdate:(bool)arg1;

@end
