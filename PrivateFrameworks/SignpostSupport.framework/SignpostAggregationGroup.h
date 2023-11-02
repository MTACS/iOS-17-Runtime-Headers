
@interface SignpostAggregationGroup : NSObject <NSCopying> {
    unsigned long long  _count;
    NSString * _countUnit;
    NSDictionary * _durationTypeToDurationDict;
    NSString * _name;
    SignpostAggregation * _parentAggregation;
    bool  _telemetryEnabled;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double countPerMs;
@property (nonatomic, readonly) double countPerNs;
@property (nonatomic, readonly) double countPerSecond;
@property (nonatomic, readonly) NSString *countUnit;
@property (nonatomic, retain) NSDictionary *durationTypeToDurationDict;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) SignpostAggregation *parentAggregation;
@property (nonatomic, readonly) bool telemetryEnabled;

+ (id)_sumOfGroup1:(id)arg1 group2:(id)arg2 errorOut:(id*)arg3;

- (void).cxx_destruct;
- (id)_addGroup:(id)arg1;
- (id)_coreAnalyticsFieldName;
- (id)_dictionaryRepresentation;
- (id)_initWithMetadataSegment:(id)arg1 errorOut:(id*)arg2;
- (id)_initWithName:(id)arg1 count:(unsigned long long)arg2 countUnit:(id)arg3 telemetryEnabled:(bool)arg4;
- (id)_telemetryEnabledGroupDurations;
- (void)addToPayloadDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (double)countPerMs;
- (double)countPerNs;
- (double)countPerSecond;
- (id)countUnit;
- (id)durationTypeToDurationDict;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)parentAggregation;
- (void)setDurationTypeToDurationDict:(id)arg1;
- (void)setParentAggregation:(id)arg1;
- (bool)telemetryEnabled;

@end
