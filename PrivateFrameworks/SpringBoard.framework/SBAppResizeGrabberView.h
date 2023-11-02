
@interface SBAppResizeGrabberView : UIView <MTLumaDodgePillBackgroundLuminanceObserver, UIPointerInteractionDelegate> {
    unsigned long long  _corner;
    UIBezierPath * _maskPath;
    MTLumaDodgePillView * _pillView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_resizeGrabberPathForSize:(struct CGSize { double x1; double x2; })arg1 curve:(double)arg2 lineWidth:(double)arg3 rotation:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCorner:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;

@end
