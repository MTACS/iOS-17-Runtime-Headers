
@interface AACAwardsClient : NSObject {
    AACXPCClient * _client;
}

@property (nonatomic, retain) AACXPCClient *client;

- (void).cxx_destruct;
- (void)addEarnedInstances:(id)arg1 completion:(id /* block */)arg2;
- (void)addTemplates:(id)arg1 completion:(id /* block */)arg2;
- (void)allAchievementsWithCompletion:(id /* block */)arg1;
- (id)allAchievementsWithError:(id*)arg1;
- (id)client;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)provideAchievementProgressUpdates:(id)arg1 completion:(id /* block */)arg2;
- (void)removeEarnedInstances:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTemplates:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTemplatesForSource:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTemplatesWithUniqueNames:(id)arg1 completion:(id /* block */)arg2;
- (void)requestAwardingWithTriggers:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)requestProgressUpdateForProgressProviderIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleAwardingWithCompletion:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)templatesForSource:(id)arg1 completion:(id /* block */)arg2;

@end
