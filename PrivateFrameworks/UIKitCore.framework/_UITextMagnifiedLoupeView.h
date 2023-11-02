
@interface _UITextMagnifiedLoupeView : UIView <_UITextLoupeView> {
    UIView<_UITextSelectionWidgetAnimating> * _animatableSelectionWidget;
    struct { 
        bool apertureOpen; 
        bool floatingAbove; 
    }  _animationState;
    UIView * _containerView;
    UIView * _coverView;
    double  _dismissalProgress;
    CADisplayLink * _displayLink;
    UIView * _glowView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _modelPosition;
    unsigned long long  _orientation;
    UIView * _portalContainerView;
    _UIPortalView * _portalView;
    bool  _visible;
}

@property (nonatomic) UIView<_UITextSelectionWidgetAnimating> *animatableSelectionWidget;
@property (nonatomic) struct { bool x1; bool x2; } animationState;
@property (nonatomic, readonly) <UICoordinateSpace> *containerCoordinateSpace;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIView *coverView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissalProgress;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) UIView *glowView;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } modelPosition;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic, retain) UIView *portalContainerView;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)_animatableSelectionWidget;
- (struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })_defaultOriginShadow;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; })_defaultOriginShape;
- (void)_displayLinkFired:(id)arg1;
- (bool)_isVertical;
- (void)_resetAnimationState;
- (void)_stopDisplayLink;
- (void)_updatePortalViewTransformForPosition:(struct CGPoint { double x1; double x2; })arg1 zoomScale:(double)arg2;
- (id)animatableSelectionWidget;
- (struct { bool x1; bool x2; })animationState;
- (struct CGPoint { double x1; double x2; })constrainedModelPositionForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)containerCoordinateSpace;
- (id)containerView;
- (id)coverView;
- (double)dismissalProgress;
- (id)displayLink;
- (id)glowView;
- (id)initWithSourceView:(id)arg1;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })modelPosition;
- (unsigned long long)orientation;
- (id)portalContainerView;
- (id)portalView;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)removeFromSuperview;
- (void)setAnimatableSelectionWidget:(id)arg1;
- (void)setAnimationState:(struct { bool x1; bool x2; })arg1;
- (void)setContainerView:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setDismissalProgress:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setGlowView:(id)arg1;
- (void)setModelPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setPortalContainerView:(id)arg1;
- (void)setPortalView:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)visible;

@end
