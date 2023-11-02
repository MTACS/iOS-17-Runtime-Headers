
@interface ICDocCamNavigationController : UINavigationController

- (bool)_canShowWhileLocked;
- (long long)_preferredModalPresentationStyle;
- (id)initWithImageCache:(id)arg1 docCamDelegate:(id)arg2 remoteDocCamDelegate:(id)arg3;
- (void)prepareForDismissal;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
