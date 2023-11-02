
@interface _UITextFormattingSceneHostingImpl : NSObject <_UISceneHostingControllerDelegate, _UITextFormattingRemoteViewControllerHost, _UITextFormattingViewHostingImpl> {
    _UISceneHostingController * _hostingController;
    UITextFormattingViewController * delegateTextFormattingViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UITextFormattingViewController *delegateTextFormattingViewController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alignCenter;
- (void)_alignJustified;
- (void)_alignLeft;
- (void)_alignRight;
- (void)_decreaseSize;
- (void)_increaseSize;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedColor:(id)arg2;
- (void)_presentFontPickerWithConfiguration:(id)arg1 selectedFonts:(id)arg2;
- (id)_remoteSheet;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleBoldface;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(id)arg1;
- (void)clientIsReady;
- (id)delegateTextFormattingViewController;
- (void)setDelegateTextFormattingViewController:(id)arg1;
- (void)setRemoteConfiguration:(id)arg1;
- (void)setRemoteTextAttributes:(id)arg1;
- (void)setupRemoteHosting;
- (void)setupSceneHosting;

@end
