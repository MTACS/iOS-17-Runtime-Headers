
@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider> {
    NSMapTable * _credentialsViewControllerMap;
    WFSettingsController * _settingsController;
}

@property (nonatomic, retain) NSMapTable *credentialsViewControllerMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFSettingsController *settingsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)certificateViewControllerWithContext:(id)arg1;
- (id)credentialsViewControllerMap;
- (id)credentialsViewControllerWithContext:(id)arg1;
- (void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2;
- (id)init;
- (id)networkDetailsViewControllerWithContext:(id)arg1;
- (id)networkErrorViewControllerWithContext:(id)arg1;
- (id)otherNetworkViewControllerWithContext:(id)arg1 appearanceProxy:(id)arg2;
- (void)setCredentialsViewControllerMap:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (id)settingsController;

@end
