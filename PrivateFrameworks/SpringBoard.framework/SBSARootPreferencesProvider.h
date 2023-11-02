
@interface SBSARootPreferencesProvider : SBSABasePreferencesProvider <SBSAStackablePreferencesProviding> {
    bool  _configuredInitialStack;
    SBSAElementLayoutTransition * _lastChangingElementLayoutTransition;
    NSArray * _previouslyVisibleElements;
}

@property (nonatomic, retain) <SBSAStackablePreferencesProviding> *childProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBSAStackablePreferencesProviding> *parentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_handleBounceRequest:(id)arg1;
- (bool)_handleEjectRequest:(id)arg1;
- (bool)_handlePulseRequest:(id)arg1;
- (void)_handleRequests:(id)arg1;
- (bool)_handleShakeRequest:(id)arg1;
- (void)_updateDynamicsSessionProviders:(id)arg1;
- (id)initWithParentProvider:(id)arg1;
- (id)preferencesFromContext:(id)arg1;
- (void)removeFromParentProvider;

@end
