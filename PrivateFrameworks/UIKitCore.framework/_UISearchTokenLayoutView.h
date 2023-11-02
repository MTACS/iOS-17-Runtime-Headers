
@interface _UISearchTokenLayoutView : UIView {
    UIView<_UIAtomTextViewAtomLayout> * _delegateView;
    bool  _isLastSearchToken;
    double  _verticalDelegateViewOrigin;
}

@property (nonatomic, retain) UIView<_UIAtomTextViewAtomLayout> *delegateView;
@property (nonatomic) bool isLastSearchToken;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })atomInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3;
- (id)delegateView;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegateView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isLastSearchToken;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (void)setDelegateView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsLastSearchToken:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)targetedDragPreviewInContainerView:(id)arg1;
- (void)updateMaskLayerForAttachmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateMaskLayerForVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewForLastBaselineLayout;

@end
