
@interface TPSAnalyticsEventProcessedUsageEvents : TPSAnalyticsEvent {
    unsigned long long  _desiredOutcomeCount;
    TPSExperiment * _experiment;
    NSDate * _firstShownDate;
    NSString * _identifier;
    NSDate * _notifiedDate;
    bool  _overrideHoldout;
    bool  _postHintRangeOutOfBounds;
    unsigned long long  _postHintUsageCount;
    bool  _preHintRangeOutOfBounds;
    unsigned long long  _preHintUsageCount;
}

@property (nonatomic, readonly) unsigned long long desiredOutcomeCount;
@property (nonatomic, readonly) TPSExperiment *experiment;
@property (nonatomic, readonly) NSDate *firstShownDate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *notifiedDate;
@property (nonatomic, readonly) bool overrideHoldout;
@property (nonatomic, readonly) bool postHintRangeOutOfBounds;
@property (nonatomic, readonly) unsigned long long postHintUsageCount;
@property (nonatomic, readonly) bool preHintRangeOutOfBounds;
@property (nonatomic, readonly) unsigned long long preHintUsageCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)desiredOutcomeCount;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experiment;
- (id)firstShownDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsageInfo:(id)arg1 experiment:(id)arg2 preHintUsageCount:(unsigned long long)arg3 postHintUsageCount:(unsigned long long)arg4 preHintRangeOutOfBounds:(bool)arg5 postHintRangeOutOfBounds:(bool)arg6 date:(id)arg7;
- (id)mutableAnalyticsEventRepresentation;
- (id)notifiedDate;
- (bool)overrideHoldout;
- (bool)postHintRangeOutOfBounds;
- (unsigned long long)postHintUsageCount;
- (bool)preHintRangeOutOfBounds;
- (unsigned long long)preHintUsageCount;

@end
