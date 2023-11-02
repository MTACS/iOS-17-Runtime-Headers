
@interface ABPKMLModelConfiguration2DStandardFull : ABPKMLModelConfiguration2D {
    NSString * _mlModelPath;
}

- (void).cxx_destruct;
- (unsigned int)affinityMapChannels;
- (bool)applyPreProcessing;
- (float)biasB;
- (float)biasG;
- (float)biasR;
- (id)compiledMLModelPath;
- (id)configStringForABPKDeviceOrientation:(long long)arg1;
- (unsigned int)heatMapChannels;
- (id)init;
- (struct CGSize { double x1; double x2; })inputDimensions;
- (struct CGSize { double x1; double x2; })inputDimensionsForABPKDeviceOrientation:(long long)arg1;
- (id)inputTensorNames;
- (bool)networkEstimatesAffinityMaps;
- (bool)networkWantsBGR;
- (id)outputTensorNames;
- (float)scale;

@end
