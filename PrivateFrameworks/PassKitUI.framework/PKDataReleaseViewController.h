
@interface PKDataReleaseViewController : PKPaymentAuthorizationServiceCompactNavigationContainerController <PKDataReleaseContentViewControllerDelegate> {
    <PKDataReleaseViewControllerDelegate> * _dataReleaseDelegate;
    PKDataReleaseContentViewController * _vc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_updateExclustionRectWithButtonPresent:(bool)arg1;
- (void)_updatePhysicalButtonWithVC:(id)arg1;
- (void)dataReleaseCompletedWithError:(id)arg1;
- (void)dataReleaseContentViewController:(id)arg1 didAuthorizeWithExternalAuthorizationData:(id)arg2 dataToRelease:(id)arg3;
- (void)dataReleaseContentViewController:(id)arg1 didFinishWithError:(id)arg2;
- (void)dataReleaseContentViewController:(id)arg1 didResolveToMerchant:(id)arg2;
- (void)dataReleaseContentViewControllerDidChangePhysicalButtonState:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
