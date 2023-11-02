
@interface PKTextInputPaletteController : NSObject <PKPaletteControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteTapToRadarCommandDelegate, PKTextInputWindowFirstResponderControllerDelegate, UIEditingOverlayInteractionWithView> {
    PKPaletteFloatingKeyboardController * __floatingKeyboardController;
    PKPaletteController * __paletteController;
    PKTextInputSettings * __textInputSettings;
    PKTextInputWindowFirstResponderController * __windowFirstResponderController;
    bool  __writingStateActive;
    <PKTextInputPaletteControllerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _editingOverlayContainerSceneBounds;
}

@property (nonatomic, retain) PKPaletteFloatingKeyboardController *_floatingKeyboardController;
@property (nonatomic, retain) PKPaletteController *_paletteController;
@property (nonatomic, retain) PKTextInputSettings *_textInputSettings;
@property (nonatomic, retain) PKTextInputWindowFirstResponderController *_windowFirstResponderController;
@property (getter=_isWritingStateActive, setter=_setWritingStateActive:, nonatomic) bool _writingStateActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTextInputPaletteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } editingOverlayContainerSceneBounds;
@property (readonly) unsigned long long hash;
@property (getter=isPaletteVisible, nonatomic, readonly) bool paletteVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (bool)_canShowPaletteUI;
- (id)_floatingKeyboardController;
- (bool)_isFirstResponderEditableTextInputWithPencilTextInputSource;
- (bool)_isFirstResponderInputAssistantEnabled;
- (bool)_isFirstResponderVisible;
- (bool)_isWritingStateActive;
- (id)_paletteController;
- (id)_paletteControllerContainerView;
- (void)_peformPaletteVisibilityUpdate;
- (void)_recognitionLocaleIdentifierDidChange:(id)arg1;
- (void)_setWritingStateActive:(bool)arg1;
- (void)_setupPaletteControllerIfNeededWithView:(id)arg1 wantsPaletteVisible:(bool)arg2;
- (bool)_shouldPaletteBeVisible;
- (id)_textInputSettings;
- (void)_updatePaletteVisibility;
- (id)_windowFirstResponderController;
- (void)dealloc;
- (id)delegate;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingOverlayContainerSceneBounds;
- (void)floatingKeyboardControllerWillHide:(id)arg1;
- (void)floatingKeyboardControllerWillShow:(id)arg1;
- (id)init;
- (id)initWithTextInputSettings:(id)arg1;
- (bool)isPaletteVisible;
- (bool)paletteController:(id)arg1 shouldOverridePaletteViewTraitCollectionTo:(id)arg2;
- (void)paletteControllerFloatingKeyboardWillHide:(id)arg1;
- (void)paletteControllerFloatingKeyboardWillShow:(id)arg1;
- (id)paletteTapToRadarCommandConfiguration:(id)arg1;
- (id)responderForFloatingKeyboardController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingOverlayContainerSceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_floatingKeyboardController:(id)arg1;
- (void)set_paletteController:(id)arg1;
- (void)set_textInputSettings:(id)arg1;
- (void)set_windowFirstResponderController:(id)arg1;
- (void)updateFirstResponderVisibility;
- (void)windowFirstResponderController:(id)arg1 didChangeFirstResponder:(id)arg2;
- (id)windowScene;

@end
