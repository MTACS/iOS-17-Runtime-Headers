
@protocol CPApplicationPolicyManager <NSObject>

@required

- (void)addDelegate:(id <CPApplicationPolicyManagerDelegate>)arg1 withQueue:(OS_dispatch_queue *)arg2;
- (NSDictionary *)authorizedBundleIdentifiers;
- (bool)autoSharePlayEnabled;
- (void)setAuthorization:(bool)arg1 forBundleID:(NSString *)arg2;
- (void)setAutoSharePlayEnabled:(bool)arg1;
- (bool)shouldAutoLaunchAppForActivity:(TUConversationActivity *)arg1 onConversation:(TUConversation *)arg2;
- (void)updateAllowedHandlesForConversation:(TUConversation *)arg1;

@end
