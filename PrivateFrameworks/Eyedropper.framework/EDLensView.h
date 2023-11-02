
@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate> {
    bool  _active;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centerOffsetAtTouchDown;
    EDColorAnalyzer * _colorAnalyzer;
    <EDLensViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    bool  _floatingMode;
    EDGridView * _gridView;
    struct EDColor { 
        double r; 
        double g; 
        double b; 
    }  _hoverColor;
    double  _hoverColorBrightness;
    UIView * _hoverColorCenterView;
    UIView * _hoverColorRingView;
    long long  _interfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPosition;
    UIPointerInteraction * _pointerInteraction;
    UIView * _ringBorderView;
    UIView * _screenshotSurfaceView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) struct CGPoint { double x1; double x2; } centerOffsetAtTouchDown;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDLensViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool floatingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastPosition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayLinkFired;
- (bool)_isScreenScaleEven;
- (void)_layoutStaticElements;
- (long long)_lensPosition;
- (struct CGPoint { double x1; double x2; })_lensViewLocalCenter;
- (void)_updateLastPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (struct CGPoint { double x1; double x2; })centerOffsetAtTouchDown;
- (id)delegate;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragItemsForInteraction:(id)arg1;
- (bool)floatingMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (bool)isAccessibilityElement;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })lastPosition;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)presentAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectColor;
- (void)setActive:(bool)arg1;
- (void)setCenterOffsetAtTouchDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingMode:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLastPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateCenterOffsetAtTouchDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateLensViewWithEvent:(id)arg1;

@end
