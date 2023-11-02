
@interface BMIntelligencePlatformFeatureStoreFeatureIdentifier : BMEventBase <BMStoreData> {
    NSString * _feature;
    NSString * _subidentifier;
    NSString * _view;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *feature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *subidentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *view;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)feature;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithView:(id)arg1 feature:(id)arg2 subidentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)subidentifier;
- (id)view;
- (void)writeTo:(id)arg1;

@end
