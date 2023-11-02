
@protocol AAUIInviteControllerDelegate <NSObject>

@required

- (void)inviteController:(UIViewController *)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(NSArray *)arg3 userInfo:(NSDictionary *)arg4 error:(NSError *)arg5;

@optional

- (void)inviteControllerDidEndAsyncLoading:(id <AAUIInviteConfigurationController>)arg1;
- (void)inviteControllerDidStartAsyncLoading:(id <AAUIInviteConfigurationController>)arg1;

@end
