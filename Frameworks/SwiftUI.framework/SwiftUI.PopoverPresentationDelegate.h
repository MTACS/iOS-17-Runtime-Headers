
@interface SwiftUI.PopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {
    void delegate;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)init;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(id*)arg3;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;

@end
