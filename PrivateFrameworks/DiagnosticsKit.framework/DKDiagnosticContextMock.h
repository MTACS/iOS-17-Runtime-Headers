
@interface DKDiagnosticContextMock : NSObject <DKResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)displayAlertWithHeader:(id)arg1 message:(id)arg2 buttonStrings:(id)arg3 completion:(id /* block */)arg4;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)arg1;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)showUI:(id)arg1 completion:(id /* block */)arg2;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)updateProgress:(id)arg1 forTest:(id)arg2;
- (void)uploadAssets:(id)arg1 completion:(id /* block */)arg2;

@end
