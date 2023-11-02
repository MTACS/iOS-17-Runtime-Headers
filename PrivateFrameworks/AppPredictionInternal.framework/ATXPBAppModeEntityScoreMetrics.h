
@interface ATXPBAppModeEntityScoreMetrics : PBCodable <NSCopying> {
    NSString * _activityState;
    NSString * _bundleId;
    NSString * _modelVersion;
    NSString * _numDaysSinceStartOfMetricsLogging;
}

@property (nonatomic, retain) NSString *activityState;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasActivityState;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasModelVersion;
@property (nonatomic, readonly) bool hasNumDaysSinceStartOfMetricsLogging;
@property (nonatomic, retain) NSString *modelVersion;
@property (nonatomic, retain) NSString *numDaysSinceStartOfMetricsLogging;

- (void).cxx_destruct;
- (id)activityState;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityState;
- (bool)hasBundleId;
- (bool)hasModelVersion;
- (bool)hasNumDaysSinceStartOfMetricsLogging;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelVersion;
- (id)numDaysSinceStartOfMetricsLogging;
- (bool)readFrom:(id)arg1;
- (void)setActivityState:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setNumDaysSinceStartOfMetricsLogging:(id)arg1;
- (void)writeTo:(id)arg1;

@end
