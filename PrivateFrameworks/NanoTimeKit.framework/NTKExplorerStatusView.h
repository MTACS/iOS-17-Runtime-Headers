
@interface NTKExplorerStatusView : UIView <CLKMonochromeComplicationView> {
    NTKExplorerDotColorOptions * _dotColorOptions;
    NSArray * _dotLayers;
    NTKExplorerDotLayoutConstraints * _dotLayoutConstraints;
    <CLKMonochromeFilterProvider> * _filterProvider;
    long long  _position;
    bool  _showsFullSignalStrength;
    long long  _signalStrengthBars;
    long long  _state;
    bool  _tritiumIsOn;
}

@property (nonatomic, readonly) UIColor *connectedDotBackgroundColor;
@property (nonatomic, readonly) UIColor *connectedDotColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double dotBorderWidth;
@property (nonatomic, retain) NTKExplorerDotColorOptions *dotColorOptions;
@property (readonly) double dotDiameter;
@property (nonatomic, retain) NTKExplorerDotLayoutConstraints *dotLayoutConstraints;
@property (readonly) double dotSpacing;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *noServiceDotColor;
@property (readonly) double noServiceDotHeight;
@property (nonatomic, readonly) long long position;
@property (nonatomic) bool showsFullSignalStrength;
@property (nonatomic) long long signalStrengthBars;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool tritiumIsOn;

+ (unsigned long long)_fixedDotPositionForState:(long long)arg1;
+ (id)connectedDotColor;
+ (double)dotBorderWidth;
+ (double)dotDiameter;
+ (double)dotSpacing;
+ (id)noServiceDotColor;
+ (double)noServiceDotHeight;

- (void).cxx_destruct;
- (void)_applyDotRotationFraction:(double)arg1 forDotAtIndex:(unsigned long long)arg2;
- (void)_applyState:(long long)arg1 animated:(bool)arg2;
- (void)_layoutDotLayers;
- (void)_updateDotFillStates;
- (id)connectedDotBackgroundColor;
- (id)connectedDotColor;
- (id)connectivityDotBackingColor;
- (double)dotBorderWidth;
- (id)dotColorOptions;
- (double)dotDiameter;
- (id)dotLayoutConstraints;
- (double)dotSpacing;
- (id)filterProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dotLayoutConstraints:(id)arg2 dotColorOptions:(id)arg3;
- (id)noServiceDotColor;
- (double)noServiceDotHeight;
- (long long)position;
- (void)setDotColorOptions:(id)arg1;
- (void)setDotLayoutConstraints:(id)arg1;
- (void)setDotPosition:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setFilterProvider:(id)arg1;
- (void)setShowsFullSignalStrength:(bool)arg1;
- (void)setSignalStrengthBars:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setTritiumIsOn:(bool)arg1;
- (bool)showsFullSignalStrength;
- (long long)signalStrengthBars;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (bool)tritiumIsOn;
- (void)updateMonochromeColor;

@end
