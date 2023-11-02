
@interface PGFeatureValidator : NSObject {
    PGFeatureExtractor * _featureExtractor;
    NSString * _featureName;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) PGFeatureExtractor *featureExtractor;
@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) NSPredicate *predicate;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (long long)_isValidEntity:(id)arg1 featureExtractor:(id)arg2 error:(id*)arg3;
- (id)featureExtractor;
- (id)featureName;
- (long long)featureValidatorType;
- (id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureName:(id)arg3;
- (long long)isValidEntity:(id)arg1 error:(id*)arg2;
- (id)predicate;

@end
