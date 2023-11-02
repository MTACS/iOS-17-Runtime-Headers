
@interface PaperKit.SignatureStyleEditingController : NSObject <UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void controller;
    void isColorPickerPresented;
    void signatureStyleEditingView;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (void)didTapColorSwatchWithSender:(id)arg1;
- (void)didTapStrokeWidthControlWithSender:(id)arg1;
- (id)init;

@end
