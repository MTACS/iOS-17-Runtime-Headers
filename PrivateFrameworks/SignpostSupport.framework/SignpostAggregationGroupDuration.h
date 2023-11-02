
@interface SignpostAggregationGroupDuration : NSObject <NSCopying> {
    NSString * _groupName;
    NSNumber * _maxDurationNs;
    NSNumber * _minDurationNs;
    SignpostAggregationGroup * _parentGroup;
    bool  _telemetryEnabled;
    unsigned long long  _totalDurationNs;
    NSString * _type;
}

@property (nonatomic, readonly) double averageDurationMs;
@property (nonatomic, readonly) unsigned long long averageDurationNs;
@property (nonatomic, readonly) double averageDurationSeconds;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSNumber *maxDurationMs;
@property (nonatomic, retain) NSNumber *maxDurationNs;
@property (nonatomic, readonly) NSNumber *maxDurationSeconds;
@property (nonatomic, readonly) NSNumber *minDurationMs;
@property (nonatomic, retain) NSNumber *minDurationNs;
@property (nonatomic, readonly) NSNumber *minDurationSeconds;
@property (nonatomic) SignpostAggregationGroup *parentGroup;
@property (nonatomic, readonly) bool telemetryEnabled;
@property (nonatomic, readonly) double totalDurationMs;
@property (nonatomic, readonly) unsigned long long totalDurationNs;
@property (nonatomic, readonly) double totalDurationSeconds;
@property (nonatomic, readonly) NSString *type;

+ (id)_sumOfDuration1:(id)arg1 duration2:(id)arg2 errorOut:(id*)arg3;

- (void).cxx_destruct;
- (id)_addDuration:(id)arg1;
- (void)_addToPayloadDictionary:(id)arg1;
- (id)_coreAnalyticsFieldName;
- (id)_dictionaryRepresentation;
- (id)_initWithMetadataSegment:(id)arg1 errorOut:(id*)arg2;
- (id)_initWithType:(id)arg1 groupName:(id)arg2 durationNs:(unsigned long long)arg3 telemetryEnabled:(bool)arg4;
- (double)averageDurationMs;
- (unsigned long long)averageDurationNs;
- (double)averageDurationSeconds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (bool)isEqual:(id)arg1;
- (id)maxDurationMs;
- (id)maxDurationNs;
- (id)maxDurationSeconds;
- (id)minDurationMs;
- (id)minDurationNs;
- (id)minDurationSeconds;
- (id)parentGroup;
- (void)setMaxDurationNs:(id)arg1;
- (void)setMinDurationNs:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (bool)telemetryEnabled;
- (double)totalDurationMs;
- (unsigned long long)totalDurationNs;
- (double)totalDurationSeconds;
- (id)type;

@end
