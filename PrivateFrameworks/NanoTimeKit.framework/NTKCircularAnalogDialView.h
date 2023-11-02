
@interface NTKCircularAnalogDialView : UIView {
    NSArray * _allHourTicks;
    NSArray * _allSmallTicks;
    NTKWhistlerAnalogColorPalette * _colorPalette;
    CLKDevice * _device;
    CALayer * _dialBackgroundLayer;
    unsigned long long  _numberOfTicks;
    struct { 
        bool smallTicksMatchingMinutes; 
        bool hideHourTicks; 
        struct CGSize { 
            double width; 
            double height; 
        } hourTickSize; 
        struct CGSize { 
            double width; 
            double height; 
        } smallTickSize; 
    }  _options;
    NSArray * _smallMatchingHourTicks;
    double  _tickPadding;
    CALayer * _ticksLayer;
}

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3;
- (double)_tickOpactiyAtIndex:(long long)arg1 bezelTextWidthInRadius:(double)arg2 invisibleTicksAlpha:(double)arg3 visibleTicksAlpha:(double)arg4;
- (void)_toggleRasterization:(bool)arg1;
- (void)applyColorTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)applyColorTransitionFraction:(double)arg1 fromFaceColorPalette:(id)arg2 toFaceColorPalette:(id)arg3;
- (void)cleanupAfterEdit;
- (void)fillDialTransitionWithFraction:(double)arg1 bezelTextWidthRadians:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2 hideHourTicks:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2 smallTicksMatchingMinutes:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(struct { bool x1; bool x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })arg2 device:(id)arg3;
- (bool)isTickIndexForHour:(unsigned long long)arg1;
- (void)layoutLayerTicks:(id)arg1 rotationAngleInDegree:(double)arg2 smallTicks:(bool)arg3;
- (void)layoutSubviews;
- (void)prepareForEdit;
- (void)setDialBackgroundColor:(id)arg1;
- (void)setHideHourTicks:(bool)arg1;
- (void)setHourTicksOpacity:(double)arg1 bezelTextWidthRadians:(double)arg2;
- (void)showAllTicksInDial;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)arg1 invisbleTicksAlpha:(double)arg2;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)arg1 finalBezelTextWidthInRadius:(double)arg2 fraction:(double)arg3;

@end
