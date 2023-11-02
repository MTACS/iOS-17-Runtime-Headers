
@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    bool  _isInternalInstall;
    SiriAnalyticsRemoteService * _remoteService;
}

+ (id)derivedIdentifierForComponent:(int)arg1 fromSourceIdentifier:(id)arg2;
+ (void)derivedIdentifierForComponent:(int)arg1 fromSourceIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (id)derivedIdentifierForComponentName:(int)arg1 fromSourceIdentifier:(id)arg2;
+ (id)sharedAnalytics;
+ (id)sharedStream;

- (void).cxx_destruct;
- (bool)clientMessageStream:(id)arg1 shouldEmitMessage:(id)arg2 timestamp:(unsigned long long)arg3 isolatedStreamUUID:(id)arg4;
- (void)createTag:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
