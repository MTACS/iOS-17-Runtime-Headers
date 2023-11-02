
@interface _UIFluidSliderFeedbackConductor : NSObject {
    long long  __currentRegion;
    unsigned long long  __detentCount;
    <_UIFluidSliderFeedbackPlayer> * __directFeedbackPlayer;
    <_UIFluidSliderFeedbackPlayer> * __indirectFeedbackPlayer;
    double  __lastValue;
    double  _epsilon;
}

@property (nonatomic) long long _currentRegion;
@property (nonatomic) unsigned long long _detentCount;
@property (nonatomic, retain) <_UIFluidSliderFeedbackPlayer> *_directFeedbackPlayer;
@property (nonatomic, retain) <_UIFluidSliderFeedbackPlayer> *_indirectFeedbackPlayer;
@property (nonatomic) double _lastValue;
@property (nonatomic) double epsilon;

- (void).cxx_destruct;
- (long long)_currentRegion;
- (unsigned long long)_detentCount;
- (id)_directFeedbackPlayer;
- (id)_indirectFeedbackPlayer;
- (double)_lastValue;
- (void)_playFeedback:(long long)arg1 forUpdateType:(long long)arg2 value:(double)arg3;
- (double)epsilon;
- (id)initWithDetentCount:(unsigned long long)arg1 coordinateSpace:(id)arg2 indirectFeedbackPlayer:(id)arg3;
- (void)moveToValue:(double)arg1 withUpdateType:(long long)arg2 forced:(bool)arg3;
- (void)setEpsilon:(double)arg1;
- (void)set_currentRegion:(long long)arg1;
- (void)set_detentCount:(unsigned long long)arg1;
- (void)set_directFeedbackPlayer:(id)arg1;
- (void)set_indirectFeedbackPlayer:(id)arg1;
- (void)set_lastValue:(double)arg1;

@end
