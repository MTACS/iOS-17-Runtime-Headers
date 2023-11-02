
@interface _UIGrabber : UIControl <_UILumaTrackingBackdropViewDelegate> {
    unsigned long long  __backgroundLuminanceLevel;
    _UILumaTrackingBackdropView * __lumaTrackingBackdropView;
    bool  __lumaTrackingEnabled;
    UIVisualEffectView * __visualEffectView;
}

@property (setter=_setBackgroundLuminanceLevel:, nonatomic) unsigned long long _backgroundLuminanceLevel;
@property (nonatomic, readonly) _UILumaTrackingBackdropView *_lumaTrackingBackdropView;
@property (setter=_setLumaTrackingEnabled:, nonatomic) bool _lumaTrackingEnabled;
@property (nonatomic, readonly) UIVisualEffectView *_visualEffectView;

- (void).cxx_destruct;
- (unsigned long long)_backgroundLuminanceLevel;
- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_lumaTrackingBackdropView;
- (bool)_lumaTrackingEnabled;
- (void)_setBackgroundLuminanceLevel:(unsigned long long)arg1;
- (void)_setLumaTrackingEnabled:(bool)arg1;
- (id)_visualEffectView;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
