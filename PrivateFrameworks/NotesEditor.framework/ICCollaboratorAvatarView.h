
@interface ICCollaboratorAvatarView : UIView {
    void $__lazy_storage_$_imageView;
    void $__lazy_storage_$_imageViewBottomConstraint;
    void $__lazy_storage_$_imageViewLeadingConstraint;
    void $__lazy_storage_$_imageViewTopConstraint;
    void $__lazy_storage_$_imageViewWidthConstraint;
    void $__lazy_storage_$_label;
    void $__lazy_storage_$_labelHeightConstraint;
    void $__lazy_storage_$_labelWidthConstraint;
    void autocollapseTimer;
    void autohideTimer;
    void boundingSuperview;
    void color;
    void fetchImage;
    void frameAnchorIsInverted;
    void frameAnchorPoint;
    void hasDisplayedInWindow;
    void isExpanded;
    void isRemovingFromSuperview;
    void name;
}

@property (nonatomic, readonly) UIView *boundingSuperview;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) bool frameAnchorIsInverted;
@property (nonatomic) struct CGPoint { double x1; double x2; } frameAnchorPoint;
@property (nonatomic) bool isExpanded;
@property (nonatomic, readonly) NSString *name;

+ (double)animationDuration;
+ (double)animationSpringDamping;
+ (double)contentHeight;

- (void).cxx_destruct;
- (id)boundingSuperview;
- (id)color;
- (void)didMoveToWindow;
- (bool)frameAnchorIsInverted;
- (struct CGPoint { double x1; double x2; })frameAnchorPoint;
- (void)handleHoverWithRecognizer:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (id)name;
- (void)removeFromSuperviewAnimatedWithCompletion:(id /* block */)arg1;
- (void)setFrameAnchorIsInverted:(bool)arg1;
- (void)setFrameAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsExpanded:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
