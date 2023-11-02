
@interface PPScoreInterpreterCoreMLModelFeature : NSObject {
    NSString * _featureName;
    long long  _featureType;
    unsigned long long  _multiArraySize;
}

@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) unsigned long long multiArraySize;

- (void).cxx_destruct;
- (id)featureName;
- (long long)featureType;
- (id)init;
- (id)initWithFeatureName:(id)arg1;
- (id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2;
- (unsigned long long)multiArraySize;

@end
