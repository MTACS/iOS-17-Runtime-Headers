
@interface PPFeatureRedactor : NSObject {
    _PASLock * _lock;
    PPTrialWrapper * _trialWrapper;
}

- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2;
- (void)transformFeaturesInPlace:(id)arg1;

@end
