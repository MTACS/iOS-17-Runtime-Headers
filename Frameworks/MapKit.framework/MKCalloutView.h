
@interface MKCalloutView : UIView <_MKMotionEffectDelegate> {
    MKAnnotationView * _annotationView;
    bool  _parallaxEnabled;
}

@property (nonatomic, readonly) long long anchorPosition;
@property (nonatomic, readonly) MKAnnotationView *annotationView;
@property (nonatomic, readonly) bool hasPendingVisibility;
@property (nonatomic) bool parallaxEnabled;
@property (getter=isVisible, nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (long long)anchorPosition;
- (id)annotationView;
- (void)annotationViewFrameDidChange;
- (void)dismissAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (bool)hasPendingVisibility;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVisible;
- (void)motionEffectDidUpdate:(id)arg1;
- (bool)parallaxEnabled;
- (void)setParallaxEnabled:(bool)arg1;
- (void)showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;

@end
