
@interface BMIntelligencePlatformFeatureStoreFeature : BMEventBase <BMStoreData> {
    BMIntelligencePlatformFeatureStoreFeatureIdentifier * _identifier;
    BMIntelligencePlatformFeatureStoreFeatureValue * _value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMIntelligencePlatformFeatureStoreFeatureIdentifier *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMIntelligencePlatformFeatureStoreFeatureValue *value;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)value;
- (void)writeTo:(id)arg1;

@end
