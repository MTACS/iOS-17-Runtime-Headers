
@interface RCBackgroundURLSessionHandler : NSObject <RCNetworkSessionObserver> {
    RCConfigurationSettings * _configurationSettings;
    id /* block */  _sessionCompletionHandler;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) RCConfigurationSettings *configurationSettings;
@property (nonatomic, copy) id /* block */ sessionCompletionHandler;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (id)configurationSettings;
- (id)init;
- (void)networkSessionDidFinishWithTasks:(id)arg1;
- (void)reestablishBackgroundSessionWithConfigurationSettings:(id)arg1 sessionCompletionHandler:(id /* block */)arg2;
- (id /* block */)sessionCompletionHandler;
- (id)sessionIdentifier;
- (void)setConfigurationSettings:(id)arg1;
- (void)setSessionCompletionHandler:(id /* block */)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
