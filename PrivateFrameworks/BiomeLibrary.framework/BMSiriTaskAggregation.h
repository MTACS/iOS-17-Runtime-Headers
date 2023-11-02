
@interface BMSiriTaskAggregation : BMEventBase <BMStoreData> {
    double  _absoluteTimestamp;
    BMSiriTaskAggregationDimensions * _dimensions;
    bool  _hasAbsoluteTimestamp;
    BMSiriTaskAggregationMetadata * _metadata;
    BMSiriTaskAggregationStatistics * _statistics;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMSiriTaskAggregationDimensions *dimensions;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMSiriTaskAggregationMetadata *metadata;
@property (nonatomic, readonly) BMSiriTaskAggregationStatistics *statistics;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)dimensions;
- (bool)hasAbsoluteTimestamp;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 metadata:(id)arg2 statistics:(id)arg3 dimensions:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)metadata;
- (id)serialize;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (id)statistics;
- (void)writeTo:(id)arg1;

@end
