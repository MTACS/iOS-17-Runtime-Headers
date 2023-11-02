
@interface BMIntelligencePlatformFeatureStoreFeatureVector : BMEventBase <BMStoreData> {
    NSArray * _feature;
    bool  _hasVersion;
    int  _version;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *feature;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int version;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_featureJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)feature;
- (bool)hasVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(id)arg1 feature:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasVersion:(bool)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
