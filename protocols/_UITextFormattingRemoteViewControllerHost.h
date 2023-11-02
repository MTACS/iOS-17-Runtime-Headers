
@protocol _UITextFormattingRemoteViewControllerHost <NSObject>

@required

- (void)_alignCenter;
- (void)_alignJustified;
- (void)_alignLeft;
- (void)_alignRight;
- (void)_decreaseSize;
- (void)_increaseSize;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedColor:(UIColor *)arg2;
- (void)_presentFontPickerWithConfiguration:(UIFontPickerViewControllerConfiguration *)arg1 selectedFonts:(NSArray *)arg2;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleBoldface;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(NSData *)arg1;

@end
