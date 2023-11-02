
@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {
    <ABPK3DLiftingAlgorithm> * _liftingAlgorithm;
}

- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_prepareOnce:(bool)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (id)init;
- (id)processEspressoTensor:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;

@end
