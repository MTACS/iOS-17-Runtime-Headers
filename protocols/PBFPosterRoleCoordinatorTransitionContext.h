
@protocol PBFPosterRoleCoordinatorTransitionContext <NSObject>

@required

- (bool)isInitialUpdate;
- (NSString *)pbf_activeChargerIdentifier;
- (<FCActivityDescribing> *)pbf_activeFocusMode;
- (PRPosterConfiguration *)pbf_currentActivePosterForRole:(NSString *)arg1;
- (NSUUID *)pbf_desiredActiveConfigurationForRole:(NSString *)arg1;
- (NSDictionary *)pbf_extensionStoreCoordinatorForProvider;
- (NSUUID *)pbf_transitionContextIdentifier;
- (bool)pbf_transitionFromIncomingFocusModeChange;

@end
