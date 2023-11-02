
@interface PaperKit.TextStyleEditingController : NSObject <PaperKit.ValueEditingViewControllerDelegate, UIColorPickerViewControllerDelegate, UIFontPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void controller;
    void displayAttributes;
    void isColorPickerPresented;
    void isCompactUI;
    void textStyleEditingView;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (void)didTapBoldTextStyle;
- (void)didTapColorSwatchWithSender:(id)arg1;
- (void)didTapFontButton;
- (void)didTapFontSizeButton;
- (void)didTapItalicTextStyle;
- (void)didTapStrikethroughTextStyle;
- (void)didTapUnderlineTextStyle;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)init;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)textAlignmentControlValueChanged;
- (void)valueEditingViewController:(id)arg1 didChangeValue:(long long)arg2;
- (void)valueEditingViewController:(id)arg1 didFinishChangingValue:(long long)arg2;
- (void)valueEditingViewController:(id)arg1 didStartChangingValue:(long long)arg2;

@end
