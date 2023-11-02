
@protocol AMUIPosterSelectionCoordinating <NSObject>

@required

- (<AMUIPosterSelectionCoordinatingDelegate> *)delegate;
- (PRSPosterConfiguration *)lastSelectedPosterConfiguration;
- (NSUUID *)lastSelectedPosterConfigurationUUIDForProviderBundleIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <AMUIPosterSelectionCoordinatingDelegate>)arg1;
- (void)updateLastSelectedPosterConfiguration:(PRSPosterConfiguration *)arg1 fromUserAction:(bool)arg2;

@end
