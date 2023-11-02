
@interface HUQuickControlRingSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate> {
    bool  _firstTouchDown;
    bool  _hasSecondaryValue;
    struct { 
        double minimum; 
        double maximum; 
    }  _modelRangeValue;
    bool  _userInteractionActive;
}

@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlRingSliderInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFirstTouchDown, nonatomic) bool firstTouchDown;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } modelRangeValue;
@property (readonly) Class superclass;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, readonly) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;

- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;
- (void)_updateModelValue:(struct { double x1; double x2; })arg1 roundValue:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (bool)hasSecondaryValue;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (bool)isFirstTouchDown;
- (bool)isUserInteractionActive;
- (struct { double x1; double x2; })modelRangeValue;
- (void)setFirstTouchDown:(bool)arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setModelRangeValue:(struct { double x1; double x2; })arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)viewProfile;

@end
