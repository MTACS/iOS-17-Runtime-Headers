
@interface ACHQuery : HKQuery <ACHQueryClientInterface> {
    id /* block */  _errorHandler;
    id /* block */  _initialAchievementsHandler;
    id /* block */  _newAchievementsHandler;
    id /* block */  _removedAchievementsHandler;
    id /* block */  _updatedAchievementsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialAchievementsHandler;
@property (nonatomic, copy) id /* block */ newAchievementsHandler;
@property (nonatomic, copy) id /* block */ removedAchievementsHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updatedAchievementsHandler;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (bool)supportsTaskServers;

- (void).cxx_destruct;
- (void)client_achievementsDidFinishInitialFetch:(id)arg1;
- (void)client_deliverNewAchievements:(id)arg1;
- (void)client_deliverRemovedAchievements:(id)arg1;
- (void)client_deliverUpdatedAchievements:(id)arg1;
- (id /* block */)errorHandler;
- (id)initWithInitialAchievementsHandler:(id /* block */)arg1 newAchievementsHandler:(id /* block */)arg2 updatedAchievementsHandler:(id /* block */)arg3 removedAchievementsHandler:(id /* block */)arg4;
- (id /* block */)initialAchievementsHandler;
- (id /* block */)newAchievementsHandler;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (id /* block */)removedAchievementsHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInitialAchievementsHandler:(id /* block */)arg1;
- (void)setNewAchievementsHandler:(id /* block */)arg1;
- (void)setRemovedAchievementsHandler:(id /* block */)arg1;
- (void)setUpdatedAchievementsHandler:(id /* block */)arg1;
- (id /* block */)updatedAchievementsHandler;

@end
