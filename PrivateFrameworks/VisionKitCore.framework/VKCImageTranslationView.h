
@interface VKCImageTranslationView : VKCImageBaseOverlayView {
    UIView * _presentationAnchorView;
    UIView * _translationContainerView;
    bool  _translationNeedsUpdate;
    VKCVisualSearchResult * _visualSearchResult;
    LTUIVisualTranslationView * _visualTranslationView;
}

@property (nonatomic) UIView *presentationAnchorView;
@property (nonatomic, retain) UIView *translationContainerView;
@property bool translationNeedsUpdate;
@property (nonatomic, retain) VKCVisualSearchResult *visualSearchResult;
@property (nonatomic, retain) LTUIVisualTranslationView *visualTranslationView;

- (void).cxx_destruct;
- (void)checkForTranslationResultsWithCompletion:(id /* block */)arg1;
- (void)hideTranslationOverlay;
- (id)init;
- (id)presentationAnchorView;
- (id)recognizedLines;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationAnchorView:(id)arg1;
- (void)setRecognitionResult:(id)arg1;
- (void)setTranslationContainerView:(id)arg1;
- (void)setTranslationNeedsUpdate:(bool)arg1;
- (void)setVisualSearchResult:(id)arg1;
- (void)setVisualTranslationView:(id)arg1;
- (void)showTranslationOverlay;
- (id)translationContainerView;
- (bool)translationNeedsUpdate;
- (id)visualSearchResult;
- (id)visualTranslationView;

@end
