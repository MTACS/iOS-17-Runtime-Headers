
@interface PKTiledTextView : PKTiledView <UIPointerInteractionDelegate, UITextInteractionDelegate> {
    UIView<PKTextAttachmentDrawingViewProviderView> * _standInEndAttachmentView;
    UIButton * _tapToRadarButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView<PKTextAttachmentDrawingViewProviderView> *standInEndAttachmentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *tapToRadarButton;

- (void).cxx_destruct;
- (void)_canvasViewWillCreateSnapshot;
- (bool)_didHitNestedTiledView:(id)arg1;
- (void)_layoutSubviews;
- (void)_scrollViewDidScroll;
- (void)_setupTapToRadarButton;
- (bool)_shouldExpandBottomAttachmentForDragAndDrop;
- (bool)_shouldPreventScrollViewPanGestureWhilePreviewing;
- (bool)_shouldUpdateHeightOfAttachments;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (id)_textView;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (bool)canAddStroke;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEndAttachment;
- (bool)hasEndAttachment;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initInScrollView:(id)arg1 sixChannelBlending:(bool)arg2 defaultDrawingClass:(Class)arg3;
- (bool)insertAttachmentIfInBlankSpace:(struct CGPoint { double x1; double x2; })arg1;
- (bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (bool)rulerHostWantsSharedRuler;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)setDefaultDrawingClass:(Class)arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setStandInEndAttachmentView:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (id)standInAttachmentView;
- (id)standInEndAttachmentView;
- (id)tapToRadarButton;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)updateEndAttachment;
- (id)viewForAttachmentAtBlankSpace;
- (id)viewToMakeFirstResponderWhenHoveringOverAttachment:(id)arg1;

@end
