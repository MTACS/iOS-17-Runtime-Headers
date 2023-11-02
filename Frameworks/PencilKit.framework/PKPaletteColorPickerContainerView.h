
@interface PKPaletteColorPickerContainerView : UIView <PKPalettePopoverDismissing, UIPopoverPresentationControllerDelegate> {
    PKPaletteColorPickerView * _colorPickerView;
    <PKPaletteColorPickerContainerViewDelegate> * _delegate;
    PKDrawingPaletteInputAssistantContainerView * _inputAssistantContainerView;
    PKPaletteInputAssistantViewController * _inputAssistantViewController;
    long long  _layoutAxis;
    <PKPalettePopoverPresenting> * _palettePopoverPresenting;
    <PKDrawingPaletteViewStateSubject> * _paletteViewState;
    bool  _shouldShowInputAssistantView;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) PKPaletteColorPickerView *colorPickerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteColorPickerContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKDrawingPaletteInputAssistantContainerView *inputAssistantContainerView;
@property (nonatomic, retain) PKPaletteInputAssistantViewController *inputAssistantViewController;
@property (nonatomic) long long layoutAxis;
@property (nonatomic) <PKPalettePopoverPresenting> *palettePopoverPresenting;
@property (nonatomic) <PKDrawingPaletteViewStateSubject> *paletteViewState;
@property (nonatomic) bool shouldShowInputAssistantView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleUCBButtonPressed;
- (void)_installInputAssistantViewContainer;
- (bool)_isInputAssistantViewControllerPresented;
- (void)_showInputAssistantPopover;
- (void)_updateUI;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)colorPickerView;
- (id)delegate;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAssistantContainerView;
- (id)inputAssistantViewController;
- (long long)layoutAxis;
- (id)palettePopoverPresenting;
- (id)paletteViewState;
- (void)setDelegate:(id)arg1;
- (void)setInputAssistantContainerView:(id)arg1;
- (void)setInputAssistantViewController:(id)arg1;
- (void)setLayoutAxis:(long long)arg1;
- (void)setPalettePopoverPresenting:(id)arg1;
- (void)setPaletteViewState:(id)arg1;
- (void)setShouldShowInputAssistantView:(bool)arg1;
- (void)setStackView:(id)arg1;
- (bool)shouldShowInputAssistantView;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;

@end
