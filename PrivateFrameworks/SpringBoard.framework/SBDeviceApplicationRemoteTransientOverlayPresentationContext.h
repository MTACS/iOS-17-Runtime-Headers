
@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject {
    <BSInvalidatable> * _pipStashAssertion;
    SBSRemoteAlertPresentationTarget * _presentationTarget;
    SBRemoteTransientOverlayViewController * _remoteViewController;
}

@property (setter=setPIPStashAssertion:, nonatomic, retain) <BSInvalidatable> *pipStashAssertion;
@property (nonatomic, retain) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic, retain) SBRemoteTransientOverlayViewController *remoteViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)pipStashAssertion;
- (id)presentationTarget;
- (id)remoteViewController;
- (void)setPIPStashAssertion:(id)arg1;
- (void)setPresentationTarget:(id)arg1;
- (void)setRemoteViewController:(id)arg1;

@end
