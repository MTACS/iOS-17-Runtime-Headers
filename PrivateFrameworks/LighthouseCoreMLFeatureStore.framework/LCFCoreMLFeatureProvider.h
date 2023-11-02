
@interface LCFCoreMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSSet * _featureNames;
    NSString * _featureStoreKey;
    NSDictionary * _featureValues;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) NSString *featureStoreKey;
@property (nonatomic, readonly) NSDictionary *featureValues;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)fromMLProvider:(id)arg1;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureStoreKey;
- (id)featureValueForName:(id)arg1;
- (id)featureValues;
- (id)init:(id)arg1 timestamp:(id)arg2 featureValues:(id)arg3;
- (id)timestamp;

@end
