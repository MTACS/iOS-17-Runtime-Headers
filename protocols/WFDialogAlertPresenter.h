
@protocol WFDialogAlertPresenter <NSObject>

@required

- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(NSString *)arg1;
- (bool)alertIsActive;
- (void)deactivateAlert;
- (<WFDialogAlertPresenterDelegate> *)delegate;
- (void)setDelegate:(id <WFDialogAlertPresenterDelegate>)arg1;

@end
