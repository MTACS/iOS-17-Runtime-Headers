
@interface BMSiriRequestCounts : BMEventBase <BMStoreData> {
    BMSiriRequestCountsMetadata * _metadata;
    BMSiriRequestCountsStatistics * _statistics;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMSiriRequestCountsMetadata *metadata;
@property (nonatomic, readonly) BMSiriRequestCountsStatistics *statistics;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMetadata:(id)arg1 statistics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)metadata;
- (id)serialize;
- (id)statistics;
- (void)writeTo:(id)arg1;

@end
