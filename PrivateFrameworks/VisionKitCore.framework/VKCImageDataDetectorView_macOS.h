
@interface VKCImageDataDetectorView_macOS : VKCImageDataDetectorView <UIGestureRecognizerDelegate> {
    VKQuad * _buttonQuad;
    VKQuad * _ddBottomQuad;
    VKCImageDataDetectorViewHighlightButton * _highlightButtonImageView;
    VKCDataDetectorHighlightView * _highlightView;
    VKCBaseDataDetectorElement * _highlightedElement;
    UITapGestureRecognizer * _tapGR;
}

@property (nonatomic, retain) VKQuad *buttonQuad;
@property (nonatomic, retain) VKQuad *ddBottomQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VKCImageDataDetectorViewHighlightButton *highlightButtonImageView;
@property (nonatomic, retain) VKCDataDetectorHighlightView *highlightView;
@property (nonatomic, retain) VKCBaseDataDetectorElement *highlightedElement;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGR;

- (void).cxx_destruct;
- (double)angleOfQuad:(id)arg1 LTR:(bool)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (struct CGSize { double x1; double x2; })buttonImageSizeFromQuad:(id)arg1 baseline:(struct CGPoint { double x1; double x2; }*)arg2 LTR:(bool)arg3 finalIsLTR:(bool*)arg4;
- (id)buttonQuad;
- (double)closestDistanceFromLine:(struct CGPoint { double x1; double x2; }*)arg1 point:(struct CGPoint { double x1; double x2; })arg2 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)ddBottomQuad;
- (struct VKEdgeDistance { double x1; double x2; })edgeDistanceFromLine:(struct CGPoint { double x1; double x2; }*)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)highlightButtonImageView;
- (id)highlightView;
- (id)highlightedElement;
- (bool)highlightedElementContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsRotationOffsetForElementQuad:(id)arg1 buttonQuad:(id)arg2 isLTR:(bool)arg3;
- (id)pathForDataDetectorElement:(id)arg1;
- (id)quadAddingButtonQuad:(id)arg1 toElementQuad:(id)arg2 LTR:(bool)arg3;
- (void)setButtonQuad:(id)arg1;
- (void)setDdBottomQuad:(id)arg1;
- (void)setHighlightButtonImageView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlightedElement:(id)arg1;
- (void)setTapGR:(id)arg1;
- (id)setupButtonForElement:(id)arg1;
- (id)tapGR;
- (void)updateHighlightForPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
