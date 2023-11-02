
@interface BMMLSEDurableFeatureStoreFeatureValueHistogramBucket : BMEventBase <BMStoreData> {
    NSString * _bucketName;
    NSArray * _counts;
    bool  _hasEver;
    bool  _hasHasEver;
}

@property (nonatomic, readonly) NSString *bucketName;
@property (nonatomic, readonly) NSArray *counts;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEver;
@property (nonatomic) bool hasHasEver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_countsJSONArray;
- (id)bucketName;
- (id)counts;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasEver;
- (bool)hasHasEver;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBucketName:(id)arg1 hasEver:(id)arg2 counts:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasHasEver:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
