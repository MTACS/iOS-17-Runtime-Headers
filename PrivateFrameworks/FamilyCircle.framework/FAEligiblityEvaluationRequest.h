
@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest {
    NSString * _bundleID;
    NSString * _propertyName;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *propertyName;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)fetchEligibilityWithError:(id*)arg1;
- (id)initWithPropertyName:(id)arg1 bundleID:(id)arg2;
- (id)propertyName;
- (void)startRequestWithCompletion:(id /* block */)arg1;

@end
