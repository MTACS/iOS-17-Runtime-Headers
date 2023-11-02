
@interface _UITextFormattingRemoteViewController : _UIRemoteViewController <_UITextFormattingRemoteViewControllerHost> {
    <_UITextFormattingTerminatingRemoteViewControllerHost> * _host;
}

@property (nonatomic) <_UITextFormattingTerminatingRemoteViewControllerHost> *_host;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_alignCenter;
- (void)_alignJustified;
- (void)_alignLeft;
- (void)_alignRight;
- (bool)_canShowWhileLocked;
- (void)_decreaseSize;
- (id)_host;
- (void)_increaseSize;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedColor:(id)arg2;
- (void)_presentFontPickerWithConfiguration:(id)arg1 selectedFonts:(id)arg2;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleBoldface;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(id)arg1;
- (void)set_host:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
