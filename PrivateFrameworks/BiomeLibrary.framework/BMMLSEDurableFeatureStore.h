
@interface BMMLSEDurableFeatureStore : BMEventBase <BMStoreData> {
    int  _featureEntryType;
    int  _featureName;
    BMMLSEDurableFeatureStoreFeatureValue * _featureValue;
    unsigned int  _featureVersion;
    bool  _hasFeatureVersion;
    NSString * _itemIdentifier;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int featureEntryType;
@property (nonatomic, readonly) int featureName;
@property (nonatomic, readonly) BMMLSEDurableFeatureStoreFeatureValue *featureValue;
@property (nonatomic, readonly) unsigned int featureVersion;
@property (nonatomic) bool hasFeatureVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (int)featureEntryType;
- (int)featureName;
- (id)featureValue;
- (unsigned int)featureVersion;
- (bool)hasFeatureVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithFeatureEntryType:(int)arg1 itemIdentifier:(id)arg2 featureName:(int)arg3 featureValue:(id)arg4 featureVersion:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasFeatureVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
