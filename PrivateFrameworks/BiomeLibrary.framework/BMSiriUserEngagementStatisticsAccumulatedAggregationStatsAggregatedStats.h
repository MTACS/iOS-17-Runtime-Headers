
@interface BMSiriUserEngagementStatisticsAccumulatedAggregationStatsAggregatedStats : BMEventBase <BMStoreData> {
    bool  _hasIntendedRequestCount;
    bool  _hasIntendedRequestRatio;
    bool  _hasRequestCount;
    bool  _hasTriggeredMechanismRequestRatio;
    bool  _hasUnintendedRequestCount;
    int  _intendedRequestCount;
    double  _intendedRequestRatio;
    NSString * _modelVersion;
    int  _requestCount;
    int  _triggeredMechanism;
    double  _triggeredMechanismRequestRatio;
    int  _unintendedRequestCount;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIntendedRequestCount;
@property (nonatomic) bool hasIntendedRequestRatio;
@property (nonatomic) bool hasRequestCount;
@property (nonatomic) bool hasTriggeredMechanismRequestRatio;
@property (nonatomic) bool hasUnintendedRequestCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int intendedRequestCount;
@property (nonatomic, readonly) double intendedRequestRatio;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) int requestCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int triggeredMechanism;
@property (nonatomic, readonly) double triggeredMechanismRequestRatio;
@property (nonatomic, readonly) int unintendedRequestCount;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIntendedRequestCount;
- (bool)hasIntendedRequestRatio;
- (bool)hasRequestCount;
- (bool)hasTriggeredMechanismRequestRatio;
- (bool)hasUnintendedRequestCount;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTriggeredMechanism:(int)arg1 requestCount:(id)arg2 intendedRequestCount:(id)arg3 unintendedRequestCount:(id)arg4 intendedRequestRatio:(id)arg5 triggeredMechanismRequestRatio:(id)arg6 modelVersion:(id)arg7;
- (int)intendedRequestCount;
- (double)intendedRequestRatio;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)modelVersion;
- (int)requestCount;
- (id)serialize;
- (void)setHasIntendedRequestCount:(bool)arg1;
- (void)setHasIntendedRequestRatio:(bool)arg1;
- (void)setHasRequestCount:(bool)arg1;
- (void)setHasTriggeredMechanismRequestRatio:(bool)arg1;
- (void)setHasUnintendedRequestCount:(bool)arg1;
- (int)triggeredMechanism;
- (double)triggeredMechanismRequestRatio;
- (int)unintendedRequestCount;
- (void)writeTo:(id)arg1;

@end
