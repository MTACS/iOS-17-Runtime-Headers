
@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem <PKPaletteFloatingKeyboardControllerDelegate> {
    <PKTextInputKeyboardAssistantItemDelegate> * _delegate;
    PKPaletteFloatingKeyboardController * _floatingKeyboardController;
    long long  _floatingKeyboardType;
    UIImage * _indicatorImage;
    PKTextInputLanguageSelectionToken * _observerToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTextInputKeyboardAssistantItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaletteFloatingKeyboardController *floatingKeyboardController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentInteraction;
- (void)_updateImageAndNotify;
- (void)dealloc;
- (id)delegate;
- (void)didAction:(id)arg1;
- (void)didDisplayAssistantItem;
- (id)floatingKeyboardController;
- (void)floatingKeyboardController:(id)arg1 didChangeKeyboardType:(long long)arg2;
- (void)floatingKeyboardControllerWillHide:(id)arg1;
- (void)floatingKeyboardControllerWillShow:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)responderForFloatingKeyboardController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingKeyboardController:(id)arg1;

@end
