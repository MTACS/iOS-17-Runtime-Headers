
@interface NEAppPushProvider : NEProvider {
    NSDictionary * _providerConfiguration;
}

@property (retain) NSDictionary *providerConfiguration;

- (void).cxx_destruct;
- (void)handleTimerEvent;
- (id)init;
- (id)providerConfiguration;
- (void)reportIncomingCallWithUserInfo:(id)arg1;
- (void)reportPushToTalkMessageWithUserInfo:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;
- (void)start;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
