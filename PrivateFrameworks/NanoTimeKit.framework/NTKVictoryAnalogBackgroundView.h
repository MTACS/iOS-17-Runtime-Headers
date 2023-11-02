
@interface NTKVictoryAnalogBackgroundView : UIView {
    NSArray * _activeDigitIndices;
    bool  _canonicalDigitStatesByStyle;
    UIView * _contentView;
    <NTKVictoryAnalogBackgroundViewDelegate> * _delegate;
    CLKDevice * _device;
    unsigned long long  _dialShape;
    double  _dialShapeFraction;
    UIImage * _dotImage;
    NSArray * _largeHourMarkerLabels;
    NTKVictoryLogoButton * _logoButton;
    UIImage * _logoImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionBig;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionCircularDial;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionNoDigits;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionRing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionSmallFont;
    NSArray * _mediumNumberLayers;
    <NTKVictoryAnalogBackgroundColorPalette> * _palette;
    bool  _ringLayerIsDigit;
    NSMutableArray * _ringLayers;
    NSMutableDictionary * _smallHourMarkerLabelsByIndex;
    NTKVictoryLogoButton * _smallLogoButton;
    unsigned long long  _style;
    CAMediaTimingFunction * _transitionTimingFunction;
}

@property (nonatomic) <NTKVictoryAnalogBackgroundViewDelegate> *delegate;
@property (nonatomic) unsigned long long dialShape;
@property (nonatomic, retain) UIImage *logoImage;
@property (nonatomic, retain) <NTKVictoryAnalogBackgroundColorPalette> *palette;
@property (nonatomic) unsigned long long style;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (id)_activeRingLayers;
- (id)_activeRingObjects;
- (void)_applyPalette:(id)arg1 forStyle:(unsigned long long)arg2;
- (id)_circularDialLogoImage;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1 palette:(id)arg2;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (id)_createHourMarkerLabelsWithFontSize:(double)arg1;
- (void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
- (void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
- (void)_createRingLayersIfNeeded;
- (id)_createSmallHourMarkerLabelForIndex:(id)arg1;
- (unsigned long long)_digitForIndex:(unsigned long long)arg1;
- (id)_dotImage;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (struct CGColor { }*)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (void)_logoTapped:(id)arg1;
- (struct CGPoint { double x1; double x2; })_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(bool)arg2;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (void)addLogoButtonIfNeeded;
- (void)addSmallLogoButtonIfNeeded;
- (void)applyTransitionFraction:(double)arg1 fromDialShape:(unsigned long long)arg2 toDialShape:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromOlympusStyle:(unsigned long long)arg2 toOlympusStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 animateElements:(bool)arg5;
- (struct CGPoint { double x1; double x2; })centerPointForSmallHourMarkerAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (unsigned long long)dialShape;
- (id)digitForLargeNumberAtIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (bool)isCircularDial;
- (void)layoutNumbers;
- (void)layoutSubviews;
- (id)logoImage;
- (struct CGPoint { double x1; double x2; })logoPositionForStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })logoSizeForStyle:(unsigned long long)arg1;
- (id)palette;
- (void)setDelegate:(id)arg1;
- (void)setDialShape:(unsigned long long)arg1;
- (void)setInTimeTravel:(bool)arg1 animated:(bool)arg2;
- (void)setLogoImage:(id)arg1;
- (void)setPalette:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)willBeginEditing;

@end
