
@interface ICInkPaletteController : NSObject <PKToolPickerObserver, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate> {
    <ICInkPaletteControllerDelegate> * _delegate;
    bool  _didTapDoneButton;
    bool  _isSystemPaperUI;
    long long  _palettePosition;
    UIView * _parentView;
    ICInkToolPickerResponder * _responder;
    long long  _storedColorUserInterfaceStyle;
    PKTool * _storedSelectedTool;
    PKToolPicker * _toolPicker;
}

@property (nonatomic, readonly) PKTool *colorCorrectedTool;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICInkPaletteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didTapDoneButton;
@property (getter=isHandwritingToolSelected, nonatomic, readonly) bool handwritingToolSelected;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSystemPaperUI;
@property (nonatomic) long long palettePosition;
@property (nonatomic) UIView *parentView;
@property (nonatomic) ICInkToolPickerResponder *responder;
@property (nonatomic, copy) PKTool *selectedTool;
@property (nonatomic) long long storedColorUserInterfaceStyle;
@property (nonatomic, retain) PKTool *storedSelectedTool;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKToolPicker *toolPicker;

+ (id)sharedToolPickerForWindow:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_colorPickerPopoverPresentationSourceRect:(id)arg1;
- (id)_colorPickerPopoverPresentationSourceView:(id)arg1;
- (void)_toolPicker:(id)arg1 didChangeColor:(id)arg2;
- (void)_toolPicker:(id)arg1 shouldSetVisible:(bool)arg2;
- (void)_toolPickerDidChangePosition:(id)arg1;
- (void)_toolPickerDidInvokeDoneAction:(id)arg1;
- (id)_toolPickerUndoManager:(id)arg1;
- (void)_toolPickerVisibilityDidChange:(id)arg1 isAnimationFinished:(bool)arg2;
- (id)colorCorrectedTool;
- (long long)colorUserInterfaceStyle;
- (void)dealloc;
- (id)delegate;
- (bool)didTapDoneButton;
- (void)hideInkPaletteAnimated:(bool)arg1;
- (id)init;
- (id)initWithParentView:(id)arg1 responder:(id)arg2 delegate:(id)arg3 isSystemPaperUI:(bool)arg4;
- (bool)isHandwritingToolSelected;
- (bool)isInkPaletteShowing;
- (bool)isSystemPaperUI;
- (long long)palettePosition;
- (id)parentView;
- (void)resetToPencilKitCompatibleInk;
- (id)responder;
- (id)selectedTool;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidTapDoneButton:(bool)arg1;
- (void)setIsSystemPaperUI:(bool)arg1;
- (void)setPalettePosition:(long long)arg1;
- (void)setParentView:(id)arg1;
- (void)setResponder:(id)arg1;
- (void)setSelectedTool:(id)arg1;
- (void)setStoredColorUserInterfaceStyle:(long long)arg1;
- (void)setStoredSelectedTool:(id)arg1;
- (void)setToolPicker:(id)arg1;
- (void)showInkPalette:(bool)arg1 animated:(bool)arg2;
- (void)showInkPaletteAnimated:(bool)arg1;
- (long long)storedColorUserInterfaceStyle;
- (id)storedSelectedTool;
- (id)toolPicker;
- (void)toolPickerFramesObscuredDidChange:(id)arg1;
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;
- (void)toolPickerSelectedToolDidChange:(id)arg1;
- (void)updateUserInterfaceStyle:(long long)arg1;

@end
