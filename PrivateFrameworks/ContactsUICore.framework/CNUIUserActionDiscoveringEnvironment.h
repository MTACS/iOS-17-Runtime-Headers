
@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment> {
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    <CNTUCallProviderManager> * _callProviderManager;
    <CNCapabilities> * _capabilities;
    CNContactStore * _contactStore;
    <CNUIDefaultUserActionFetcher> * _defaultUserActionFetcher;
    <CNSchedulerProvider> * _highLatencySchedulerProvider;
    CNUIIDSContactPropertyResolver * _idsContactPropertyResolver;
    <CNMCProfileConnection> * _profileConnection;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNUIUserActionTargetDiscovering> * _targetDiscoveringHelper;
    <CNUIRTTUtilities> * _ttyUtilities;
}

@property (nonatomic, readonly) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, readonly) <CNTUCallProviderManager> *callProviderManager;
@property (nonatomic, readonly) <CNCapabilities> *capabilities;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CNUIDefaultUserActionFetcher> *defaultUserActionFetcher;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNSchedulerProvider> *highLatencySchedulerProvider;
@property (nonatomic, readonly) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property (nonatomic, readonly) <CNMCProfileConnection> *profileConnection;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNUIUserActionTargetDiscovering> *targetDiscoveringHelper;
@property (nonatomic, readonly) <CNUIRTTUtilities> *ttyUtilities;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)callProviderManager;
- (id)capabilities;
- (id)contactStore;
- (id)copyWithContactStore:(id)arg1;
- (id)defaultUserActionFetcher;
- (id)highLatencySchedulerProvider;
- (id)idsContactPropertyResolver;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ttyUtilities:(id)arg10;
- (id)initWithIDSAvailabilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)nts_lazyContactStore;
- (id)profileConnection;
- (id)schedulerProvider;
- (id)targetDiscoveringHelper;
- (id)ttyUtilities;

@end
