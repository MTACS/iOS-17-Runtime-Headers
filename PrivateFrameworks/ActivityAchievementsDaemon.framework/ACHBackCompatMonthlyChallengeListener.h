
@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    NSDictionary * _injectedKeyValuePairs;
    HDProfile * _profile;
    id /* block */  _readTemplatesBlock;
    ACHTemplateStore * _templateStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *injectedKeyValuePairs;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, copy) id /* block */ readTemplatesBlock;
@property (readonly) Class superclass;
@property (nonatomic) ACHTemplateStore *templateStore;

- (void).cxx_destruct;
- (id)_definitionsFromKeyValuePairs:(id)arg1;
- (void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg1;
- (bool)_readAndSaveBackCompatDefinitions;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2;
- (id)injectedKeyValuePairs;
- (id)profile;
- (id /* block */)readTemplatesBlock;
- (void)setInjectedKeyValuePairs:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReadTemplatesBlock:(id /* block */)arg1;
- (void)setTemplateStore:(id)arg1;
- (id)templateStore;

@end
