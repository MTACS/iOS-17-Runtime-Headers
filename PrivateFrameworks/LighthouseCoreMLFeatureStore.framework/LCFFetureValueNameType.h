
@interface LCFFetureValueNameType : NSObject {
    NSString * _featureName;
    long long  _featureValueType;
}

@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) long long featureValueType;

- (void).cxx_destruct;
- (id)featureName;
- (long long)featureValueType;
- (id)init:(id)arg1 featureValueType:(long long)arg2;

@end
