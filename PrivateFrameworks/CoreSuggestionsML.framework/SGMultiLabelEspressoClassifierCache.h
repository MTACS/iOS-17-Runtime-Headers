
@interface SGMultiLabelEspressoClassifierCache : NSObject {
    _PASLock * _currentClassifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)outputDimensionWithFile:(id)arg1;
- (id)predict:(id)arg1 withFile:(id)arg2;
- (bool)setCachedEspressoClassifierWithFile:(id)arg1;

@end
