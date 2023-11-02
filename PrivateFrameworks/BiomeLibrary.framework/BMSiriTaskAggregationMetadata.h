
@interface BMSiriTaskAggregationMetadata : BMEventBase <BMStoreData> {
    double  _aggregationWindowEndTimestamp;
    double  _aggregationWindowStartTimestamp;
    bool  _hasAggregationWindowEndTimestamp;
    bool  _hasAggregationWindowStartTimestamp;
    NSString * _odmId;
    int  _schedule;
}

@property (nonatomic, readonly) double aggregationWindowEndTimestamp;
@property (nonatomic, readonly) double aggregationWindowStartTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAggregationWindowEndTimestamp;
@property (nonatomic) bool hasAggregationWindowStartTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *odmId;
@property (nonatomic, readonly) int schedule;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)aggregationWindowEndTimestamp;
- (double)aggregationWindowStartTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAggregationWindowEndTimestamp;
- (bool)hasAggregationWindowStartTimestamp;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSchedule:(int)arg1 aggregationWindowStartTimestamp:(id)arg2 aggregationWindowEndTimestamp:(id)arg3;
- (id)initWithSchedule:(int)arg1 aggregationWindowStartTimestamp:(id)arg2 aggregationWindowEndTimestamp:(id)arg3 odmId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)odmId;
- (int)schedule;
- (id)serialize;
- (void)setHasAggregationWindowEndTimestamp:(bool)arg1;
- (void)setHasAggregationWindowStartTimestamp:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
