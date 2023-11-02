
@protocol FAInviteControllerDelegate <NSObject>

@required

- (void)inviteController:(id <FAInviteConfigurationController>)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(NSArray *)arg3 userInfo:(NSDictionary *)arg4 error:(NSError *)arg5;

@optional

- (void)dismissWithUserInfo:(NSDictionary *)arg1;
- (void)inviteControllerDidEndAsyncLoading:(id <FAInviteConfigurationController>)arg1;
- (void)inviteControllerDidStartAsyncLoading:(id <FAInviteConfigurationController>)arg1;

@end
