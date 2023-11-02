
@interface SGMultiHeadEspressoModelCache : NSObject {
    _PASLock * _currentModel;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)headDimensionalityWithFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;
- (id)init;
- (unsigned long long)inputNumParametersWithFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;
- (id)predict:(id)arg1 heads:(id)arg2 withFile:(id)arg3 inputName:(id)arg4 headDimensionality:(id)arg5;
- (id)predict:(id)arg1 withFile:(id)arg2 inputName:(id)arg3 headDimensionality:(id)arg4;
- (bool)setCachedEspressoClassifierWithFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;

@end
