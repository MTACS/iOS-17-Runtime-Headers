
@interface _TtCC6TipKit26TipUIPopoverViewController8Delegate : NSObject <UIPopoverPresentationControllerDelegate> {
    void clientDelegate;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)init;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(id*)arg3;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;

@end
