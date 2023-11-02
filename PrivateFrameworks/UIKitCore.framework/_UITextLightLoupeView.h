
@interface _UITextLightLoupeView : UIView <_UITextLoupeView> {
    UIView * _backgroundView;
    double  _dismissalProgress;
    CADisplayLink * _displayLink;
    UIView * _glowView;
    UIView * _maskView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _modelPosition;
    UIView * _portalContainerView;
    _UIPortalView * _portalView;
    UIView * _sourceView;
    bool  _visible;
}

@property (nonatomic, readonly) <UICoordinateSpace> *containerCoordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissalProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } modelPosition;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)_backgroundColorIfNecessary;
- (void)_displayLinkFired:(id)arg1;
- (void)_stopDisplayLink;
- (void)_updateColorsForCurrentTraitCollection;
- (double)_visualOffset;
- (struct CGPoint { double x1; double x2; })constrainedModelPositionForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)containerCoordinateSpace;
- (double)dismissalProgress;
- (id)initWithSourceView:(id)arg1;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })modelPosition;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)removeFromSuperview;
- (void)setDismissalProgress:(double)arg1;
- (void)setModelPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)visible;

@end
