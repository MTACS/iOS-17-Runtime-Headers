
@interface PBFPosterRoleCoordinatorGenericTransitionContext : NSObject <PBFPosterRoleCoordinatorTransitionContext> {
    NSString * _activeChargerIdentifier;
    <FCActivityDescribing> * _activeFocusMode;
    NSDictionary * _currentActivePosterForRole;
    NSString * _description;
    NSMutableDictionary * _desiredActivePosterConfigurationForRole;
    NSDictionary * _extensionStoreCoordinatorForProviderIdentifier;
    bool  _initialUpdate;
    NSUUID * _transitionContextIdentifier;
    bool  _transitionFromIncomingFocusModeChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInitialUpdate, setter=setInitialUpdate:, nonatomic) bool isInitialUpdate;
@property (nonatomic, readonly) NSDictionary *pbf_extensionStoreCoordinatorForProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithActiveFocusMode:(id)arg1 activeChargerIdentifier:(id)arg2 extensionStoreCoordinators:(id)arg3 currentActivePosterForRole:(id)arg4;
- (bool)isInitialUpdate;
- (id)pbf_activeChargerIdentifier;
- (id)pbf_activeFocusMode;
- (id)pbf_currentActivePosterForRole:(id)arg1;
- (id)pbf_desiredActiveConfigurationForRole:(id)arg1;
- (id)pbf_extensionStoreCoordinatorForProvider;
- (id)pbf_transitionContextIdentifier;
- (bool)pbf_transitionFromIncomingFocusModeChange;
- (void)setDesiredActiveConfiguration:(id)arg1 forRole:(id)arg2;
- (void)setInitialUpdate:(bool)arg1;
- (void)setTransitionFromIncomingFocusModeChange:(bool)arg1;

@end
