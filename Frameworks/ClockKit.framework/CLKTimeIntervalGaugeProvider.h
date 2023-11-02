
@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {
    NSDate * _endDate;
    float  _endFillFraction;
    unsigned long long  _nextUpdateToken;
    bool  _paused;
    NSDate * _startDate;
    float  _startFillFraction;
    CLKClockTimerToken * _timerToken;
    NSMutableDictionary * _updateHandlersByToken;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) float endFillFraction;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) float startFillFraction;

+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_maybeStartOrStopUpdates;
- (void)_update;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (float)endFillFraction;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsTimerUpdates;
- (bool)paused;
- (double)progressFractionForNow:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEndFillFraction:(float)arg1;
- (void)setPaused:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartFillFraction:(float)arg1;
- (id)startDate;
- (float)startFillFraction;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (bool)validate;

@end
