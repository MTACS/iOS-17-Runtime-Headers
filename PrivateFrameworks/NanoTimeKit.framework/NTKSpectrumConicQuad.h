
@interface NTKSpectrumConicQuad : CLKUIQuad {
    void _aliasColor;
    NSCalendar * _calendar;
    unsigned long long  _colorInterpolation;
    <MTLBuffer> * _conicUniformsBuffers;
    <MTLDevice> * _device;
    float  _endHourAngle;
    float  _endMinuteAngle;
    double  _endOverrideTime;
    float  _endSecondAngle;
    unsigned long long  _frame;
    void _fromColor;
    unsigned int  _isAnimatingStyle;
    float  _maskRadius;
    bool  _masking;
    CAMediaTimingFunction * _mediaTimingFunction;
    void _midColor;
    float  _opacity;
    float  _overlayOpacity;
    NSDate * _overrideDate;
    NTKSpectrumResourceManager * _resourceManager;
    unsigned long long  _role;
    double  _screenScale;
    void _size;
    float  _startHourAngle;
    float  _startMinuteAngle;
    double  _startOverrideTime;
    float  _startSecondAngle;
    unsigned long long  _style;
    float  _styleTransitionFraction;
    void _toColor;
    unsigned long long  _toStyle;
    float  _vignetteOpacity;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) float maskRadius;
@property (getter=isMasking, nonatomic) bool masking;
@property (nonatomic) float opacity;
@property (nonatomic) float overlayOpacity;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic) float vignetteOpacity;

- (void).cxx_destruct;
- (void)_significantTimeChanged;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)calendar;
- (void)dealloc;
- (id)initWithRole:(unsigned long long)arg1 screenScale:(double)arg2;
- (bool)isMasking;
- (float)maskRadius;
- (float)opacity;
- (float)overlayOpacity;
- (id)overrideDate;
- (bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)setFromColor:(id)arg1 toColor:(id)arg2;
- (void)setFromColor:(id)arg1 toColor:(id)arg2 midColor:(id)arg3 interpolation:(unsigned long long)arg4;
- (void)setMaskRadius:(float)arg1;
- (void)setMasking:(bool)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOverlayOpacity:(float)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVignetteOpacity:(float)arg1;
- (void)setupForQuadView:(id)arg1;
- (float)vignetteOpacity;

@end
