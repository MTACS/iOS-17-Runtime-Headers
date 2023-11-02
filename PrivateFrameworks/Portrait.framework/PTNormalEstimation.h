
@interface PTNormalEstimation : NSObject {
    <MTLComputePipelineState> * _estimateNormalsFromDisparity;
    PTMetalContext * _metalContext;
}

- (void).cxx_destruct;
- (void)estimateNormalsFromDisparity:(id)arg1 outNormal:(id)arg2;
- (void)estimateNormalsFromDisparity:(id)arg1 outNormal:(id)arg2 sensorWidth:(float)arg3 focalLength:(float)arg4;
- (id)initWithMetalContext:(id)arg1;

@end
