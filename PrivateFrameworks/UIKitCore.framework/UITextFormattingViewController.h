
@interface UITextFormattingViewController : UIViewController <UIColorPickerViewControllerDelegate, UIFontPickerViewControllerDelegate, _UITextFormattingRemoteViewControllerHost> {
    <_UITextFormattingViewControllerDelegate> * __delegate;
    UIViewController * _childViewController;
    UIColorPickerViewController * _colorPicker;
    UITextFormattingViewControllerConfiguration * _configuration;
    <UITextFormattingViewControllerDelegate> * _delegate;
    UIFontPickerViewController * _fontPicker;
    <_UITextFormattingViewHostingImpl> * _hostingImpl;
    <UIResponderStandardEditActions> * _inputController;
    double  _keyboardSpace;
    UIViewController * _preferredFontPickerPresentationViewController;
    bool  _presentationSourceIsInputAssistantItem;
    double  _selectedFontSize;
    bool  _shouldDeferColorPickerPresentationToHost;
    bool  _shouldSkipStoppingKeyboardSuppressionOnDidDisappear;
    NSData * _textAttributesData;
}

@property (setter=_setChildViewController:, nonatomic, retain) UIViewController *_childViewController;
@property (setter=_setTextAttributesData:, nonatomic, retain) NSData *_textAttributesData;
@property (nonatomic, readonly, copy) UITextFormattingViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextFormattingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIResponderStandardEditActions> *inputController;
@property (readonly) Class superclass;

+ (bool)_useSceneBackedTextFormatting;

- (void).cxx_destruct;
- (void)_alignCenter;
- (void)_alignJustified;
- (void)_alignLeft;
- (void)_alignRight;
- (id)_childViewController;
- (void)_commonInit;
- (void)_decreaseSize;
- (void)_handleKeyboardNotification:(id)arg1;
- (void)_increaseSize;
- (void)_invalidateDetents;
- (void)_presentColorPicker:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedColor:(id)arg2;
- (void)_presentFontPickerWithConfiguration:(id)arg1 selectedFonts:(id)arg2;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)_remoteSheet;
- (void)_sendUpdatesToInputController:(id)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setPresentationSourceIsInputAssistantItem:(bool)arg1;
- (void)_setSelectedText:(id)arg1;
- (void)_setShouldDeferColorPickerPresentation:(bool)arg1;
- (void)_setShouldDeferFontPickerPresentationToViewController:(id)arg1;
- (void)_setTextAttributes:(id)arg1;
- (void)_setTextAttributesData:(id)arg1;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (id)_textAttributesData;
- (void)_textFormattingDidFinish;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_toggleBoldface;
- (void)_toggleItalics;
- (void)_toggleUnderline;
- (void)_updateRemoteConfiguration;
- (void)_updateTextAttributes:(id)arg1;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)fontPickerViewControllerDidCancel:(id)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)inputController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
