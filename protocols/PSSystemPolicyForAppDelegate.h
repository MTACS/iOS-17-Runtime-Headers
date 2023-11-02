
@protocol PSSystemPolicyForAppDelegate <NSObject>

@required

- (void)reloadSpecifiers;

@optional

- (void)showController:(UIViewController *)arg1 animate:(bool)arg2;
- (void)systemPolicyForApp:(PSSystemPolicyForApp *)arg1 didUpdateForSystemPolicyOptions:(unsigned long long)arg2 withValue:(id)arg3;

@end
