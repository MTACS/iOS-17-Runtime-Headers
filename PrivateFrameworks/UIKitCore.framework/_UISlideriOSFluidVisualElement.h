
@interface _UISlideriOSFluidVisualElement : _UISlideriOSVisualElement <_UIFluidSliderDirectDrivingDelegate, _UISliderFluidStyleVisualElement> {
    bool  _changeWithVolumeButtons;
    _UIFluidSliderInteraction * _fluidInteraction;
    unsigned long long  _fluidUpdateSource;
    bool  _overriddenTrackingState;
    double  _thumbPosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackBounds;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _trackTransform;
}

@property (nonatomic) bool changeWithVolumeButtons;
@property (nonatomic, retain) UISliderDataModel *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fluidUpdateSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) UISlider *slider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modifiedTrackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setValue:(float)arg1 minimum:(float)arg2 maximum:(float)arg3 animated:(bool)arg4;
- (void)_setupFeedback;
- (void)_setupInteraction;
- (void)_updateConfigurationForFrameChange:(bool)arg1;
- (void)_updateModelValue:(double)arg1 sendAction:(bool)arg2;
- (id)_updatedConfigurationForTrackSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (bool)changeWithVolumeButtons;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didSetEnabled;
- (void)didSetFluidTrackHidden;
- (void)didSetUserInteractionEnabled;
- (void)didSetValues;
- (bool)driver:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)fluidUpdateSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)overriddenTrackingState;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChangeWithVolumeButtons:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSlider:(id)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;

@end
