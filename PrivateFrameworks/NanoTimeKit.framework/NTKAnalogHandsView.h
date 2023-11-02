
@interface NTKAnalogHandsView : CLKUIAnalogHandsView <NTKTimeView> {
    long long  _dataMode;
    CALayer * _hourHandTransitionBodyLayer;
    CALayer * _hourHandTransitionStemLayer;
    NTKHandView * _hourHandViewAlt;
    CALayer * _minuteHandTransitionBodyLayer;
    CALayer * _minuteHandTransitionPegLayer;
    CALayer * _minuteHandTransitionStemLayer;
    NTKHandView * _minuteHandViewAlt;
    NSDate * _overrideDate;
    NTKHandView * _secondHandViewAlt;
    double  _timeOffset;
}

@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKAnalogHandsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NTKHandView *hourHandView;
@property (nonatomic, retain) NTKHandView *hourHandViewAlt;
@property (nonatomic, readonly) NTKHandView *minuteHandView;
@property (nonatomic, retain) NTKHandView *minuteHandViewAlt;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, readonly) NTKHandView *secondHandView;
@property (nonatomic, retain) NTKHandView *secondHandViewAlt;
@property (readonly) Class superclass;

+ (Class)handViewClass;

- (void).cxx_destruct;
- (void)_accessibilityInvalidateElements;
- (void)_addHourMinuteHandsTransitionLayers;
- (bool)_canRunTimeAnimation;
- (void)_enumerateHourHandViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateMinuteHandViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (void)_installAltViewsHour:(id)arg1 minute:(id)arg2 second:(id)arg3;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_setAltHandsAlpha:(double)arg1;
- (void)_setHandsAlpha:(double)arg1;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandColor:(id)arg1;
- (long long)dataMode;
- (id)displayTime;
- (id)hourHandViewAlt;
- (id)initForDevice:(id)arg1;
- (id)minuteHandViewAlt;
- (id)overrideDate;
- (id)secondHandViewAlt;
- (void)setDataMode:(long long)arg1;
- (void)setHourHandViewAlt:(id)arg1;
- (void)setMinuteHandViewAlt:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecondHandViewAlt:(id)arg1;
- (void)setTimeOffset:(double)arg1;

@end
