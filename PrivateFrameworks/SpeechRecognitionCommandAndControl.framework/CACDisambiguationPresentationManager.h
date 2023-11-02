
@interface CACDisambiguationPresentationManager : CACSimpleContentViewManager <CACContactDisambiguationPresentationViewControllerDelegate>

- (void)dialDiambiguationPresentationViewController:(id)arg1 hideWithCompletion:(id /* block */)arg2;
- (bool)isOverlay;
- (void)showWithDisambiguationItems:(id)arg1;
- (void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2;
- (void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3;

@end
