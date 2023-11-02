
@interface BMProactiveHarvestingQueryResult : BMEventBase <BMStoreData> {
    double  _confidence;
    NSString * _domain;
    bool  _hasConfidence;
    NSString * _qID;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool hasConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *qID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (bool)hasConfidence;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithQID:(id)arg1 domain:(id)arg2 confidence:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)qID;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
