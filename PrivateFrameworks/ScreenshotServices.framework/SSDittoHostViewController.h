
@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface> {
    <SSDittoHostViewControllerDelegate> * _delegate;
}

@property (nonatomic) <SSDittoHostViewControllerDelegate> *delegate;

+ (bool)__shouldHostRemoteTextEffectsWindow;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_serviceProxy;
- (bool)becomeFirstResponder;
- (id)delegate;
- (void)dismiss;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
