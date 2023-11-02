
@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate> {
    FLSpecifierTapHandler * _actionHandler;
    UIViewController * _presentationContext;
    <FLViewModel> * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentationContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissFlowWithError:(id)arg1;
- (void)_showRadarPromptForItem:(id)arg1 action:(id)arg2;
- (id)_viewModel;
- (void)actionTapped:(id)arg1;
- (id)detailSpecifiersForFollowUpItem:(id)arg1;
- (id)followUpItemSpecifiers;
- (void)handleURL:(id)arg1;
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)presentationContext;
- (void)reloadSpecifiers;
- (void)setPresentationContext:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;

@end