
@interface PKPassShareActivationOverviewNavigationController : PKNavigationController <PKPassShareActivationOverviewViewControllerDelegate, UISheetPresentationControllerDelegate> {
    PKPassShareInitiationContext * _context;
    <PKPassShareActivationOverviewViewControllerDelegate> * _delegate;
    NSMutableArray * _optionsToShow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showNextScreen;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)shareActivationOverviewViewControllerDidFinish:(id)arg1;
- (void)shareActivationOverviewViewControllerDidSelectShareCode:(id)arg1;

@end
