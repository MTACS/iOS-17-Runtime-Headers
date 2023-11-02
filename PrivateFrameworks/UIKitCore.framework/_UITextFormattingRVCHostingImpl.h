
@interface _UITextFormattingRVCHostingImpl : NSObject <_UITextFormattingTerminatingRemoteViewControllerHost, _UITextFormattingViewHostingImpl> {
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    _UITextFormattingRemoteViewController * _remoteViewController;
    UITextFormattingViewController * delegateTextFormattingViewController;
}

@property (nonatomic, readonly) <_UIRemoteSheet> *_remoteSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UITextFormattingViewController *delegateTextFormattingViewController;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UITextFormattingRemoteViewController *remoteViewController;
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
- (void)_textFormattingViewServiceDidTerminateWithError:(id)arg1;
- (void)_toggleBoldface;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateTextAttributes:(id)arg1;
- (void)dealloc;
- (id)delegateTextFormattingViewController;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)remoteViewController;
- (void)setDelegateTextFormattingViewController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setRemoteConfiguration:(id)arg1;
- (void)setRemoteTextAttributes:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setupRemoteHosting;
- (void)setupRemoteViewController;

@end
