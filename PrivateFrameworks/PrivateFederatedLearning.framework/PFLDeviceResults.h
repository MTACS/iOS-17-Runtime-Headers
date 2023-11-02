
@interface PFLDeviceResults : NSObject {
    double  _accuracy;
    long long  _flattenedPrivatizedWeightCount;
    NSData * _flattenedPrivatizedWeightData;
    NSURL * _flattenedPrivatizedWeightDataURL;
    NSString * _flattenedPrivatizedWeightType;
    double  _loss;
    NSDictionary * _metricsMap;
    long long  _modelVersion;
    NSString * _replayIdentifier;
    long long  _schemaVersion;
    long long  _shuffleId;
    NSString * _taskId;
}

@property (nonatomic) double accuracy;
@property (nonatomic, readonly) NSArray *flattenedMetricsMap;
@property (nonatomic) long long flattenedPrivatizedWeightCount;
@property (nonatomic, retain) NSData *flattenedPrivatizedWeightData;
@property (nonatomic, retain) NSURL *flattenedPrivatizedWeightDataURL;
@property (nonatomic, retain) NSString *flattenedPrivatizedWeightType;
@property (nonatomic) double loss;
@property (nonatomic, retain) NSDictionary *metricsMap;
@property (nonatomic) long long modelVersion;
@property (nonatomic, retain) NSString *replayIdentifier;
@property (nonatomic) long long schemaVersion;
@property (nonatomic) long long shuffleId;
@property (nonatomic, retain) NSString *taskId;

- (void).cxx_destruct;
- (double)accuracy;
- (id)flattenedMetricsMap;
- (long long)flattenedPrivatizedWeightCount;
- (id)flattenedPrivatizedWeightData;
- (id)flattenedPrivatizedWeightDataURL;
- (id)flattenedPrivatizedWeightType;
- (double)loss;
- (id)metricsMap;
- (long long)modelVersion;
- (id)replayIdentifier;
- (long long)schemaVersion;
- (void)setAccuracy:(double)arg1;
- (void)setFlattenedPrivatizedWeightCount:(long long)arg1;
- (void)setFlattenedPrivatizedWeightData:(id)arg1;
- (void)setFlattenedPrivatizedWeightDataURL:(id)arg1;
- (void)setFlattenedPrivatizedWeightType:(id)arg1;
- (void)setLoss:(double)arg1;
- (void)setMetricsMap:(id)arg1;
- (void)setModelVersion:(long long)arg1;
- (void)setReplayIdentifier:(id)arg1;
- (void)setSchemaVersion:(long long)arg1;
- (void)setShuffleId:(long long)arg1;
- (void)setTaskId:(id)arg1;
- (long long)shuffleId;
- (id)taskId;

@end
