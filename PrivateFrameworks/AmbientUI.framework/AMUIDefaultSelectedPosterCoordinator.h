
@interface AMUIDefaultSelectedPosterCoordinator : NSObject <AMUIPosterSelectionCoordinating> {
    AMAmbientDefaults * _ambientDefaults;
    PRSPosterConfiguration * _lastSelectedPosterConfiguration;
    AMUILastSelectedPosterStore * _lastSelectedPosterStore;
    <AMUIPosterSelectionCoordinatingDelegate> * delegate;
}

@property (nonatomic, retain) AMAmbientDefaults *ambientDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIPosterSelectionCoordinatingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterConfiguration *lastSelectedPosterConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentChargerIdentifier;
- (id)ambientDefaults;
- (id)delegate;
- (id)lastSelectedPosterConfiguration;
- (id)lastSelectedPosterConfigurationUUIDForProviderBundleIdentifier:(id)arg1;
- (void)setAmbientDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateLastSelectedPosterConfiguration:(id)arg1 fromUserAction:(bool)arg2;

@end
