
@interface TISKSessionStats : NSObject <NSSecureCoding> {
    double  _currentTypingStart;
    NSDate * _endTime;
    NSString * _identifier;
    NSString * _inputMode;
    bool  _isEmpty;
    NSMutableDictionary * _keyedMetrics;
    TIKeyboardLayout * _layout;
    NSMutableArray * _sessionIds;
    NSDate * _startTime;
    TISKEvent * _startTimerEvent;
    NSString * _version;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *inputMode;
@property (nonatomic) bool isEmpty;
@property (nonatomic, retain) NSMutableDictionary *keyedMetrics;
@property (nonatomic, retain) TIKeyboardLayout *layout;
@property (nonatomic, retain) NSMutableArray *sessionIds;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isPublishable;
- (id)_roundUpToNearestHalfHour:(id)arg1;
- (id)_roundedSessionInterval;
- (void)addSample:(id)arg1 forKey:(id)arg2;
- (void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(unsigned long long)arg3;
- (void)addToCounterForRateMetric:(int)arg1 forKey:(id)arg2;
- (void)addToDurationForRateMetric:(double)arg1 forKey:(id)arg2;
- (id)counter:(id)arg1;
- (id)description:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)generateDataForSR;
- (void)haltTypingTimer;
- (void)haltTypingTimerWithEvent:(id)arg1;
- (id)identifier;
- (id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 inputMode:(id)arg5 sessionIds:(id)arg6 layout:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isTypingTimerHalted;
- (id)keyedMetrics;
- (id)layout;
- (void)merge:(id)arg1;
- (id)positionalMetric:(id)arg1;
- (id)samples:(id)arg1;
- (id)samples:(id)arg1 withPosition:(unsigned long long)arg2;
- (id)sessionIds;
- (void)setEndTime:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsEmpty:(bool)arg1;
- (void)setKeyedMetrics:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSessionIds:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setup;
- (id)singleMetric:(id)arg1;
- (id)startTime;
- (void)startTypingTimerWithEvent:(id)arg1;
- (id)version;

@end
