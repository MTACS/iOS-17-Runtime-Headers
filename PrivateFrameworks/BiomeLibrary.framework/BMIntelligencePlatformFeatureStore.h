
@interface BMIntelligencePlatformFeatureStore : BMEventBase <BMStoreData> {
    int  _category;
    BMIntelligencePlatformFeatureStoreFeatureVector * _featureVector;
    NSString * _labelName;
    NSString * _labelValue;
    NSString * _taskName;
}

@property (nonatomic, readonly) int category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMIntelligencePlatformFeatureStoreFeatureVector *featureVector;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *labelName;
@property (nonatomic, readonly) NSString *labelValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *taskName;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)category;
- (unsigned int)dataVersion;
- (id)description;
- (id)featureVector;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLabelName:(id)arg1 labelValue:(id)arg2 taskName:(id)arg3 category:(int)arg4 featureVector:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)labelName;
- (id)labelValue;
- (id)serialize;
- (id)taskName;
- (void)writeTo:(id)arg1;

@end
