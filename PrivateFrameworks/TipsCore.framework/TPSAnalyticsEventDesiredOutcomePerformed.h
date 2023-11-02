
@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    long long  _displayCount;
    NSString * _displayType;
    NSString * _experimentCampID;
    NSString * _experimentID;
    double  _timeToDesiredOutcome;
    NSString * _tipID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic) long long displayCount;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, retain) NSString *experimentCampID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) double timeToDesiredOutcome;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 displayType:(id)arg3 overrideHoldout:(bool)arg4 lastDisplayedContext:(id)arg5 lastHintDisplayedDate:(id)arg6 desiredOutcomePerformedDate:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 displayType:(id)arg3 overrideHoldout:(bool)arg4 context:(id)arg5 lastHintDisplayedDate:(id)arg6 desiredOutcomePerformedDate:(id)arg7;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (long long)displayCount;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experimentCampID;
- (id)experimentID;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setBundleID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(long long)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setExperimentCampID:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setTimeToDesiredOutcome:(double)arg1;
- (void)setTipID:(id)arg1;
- (double)timeToDesiredOutcome;
- (id)tipID;

@end
