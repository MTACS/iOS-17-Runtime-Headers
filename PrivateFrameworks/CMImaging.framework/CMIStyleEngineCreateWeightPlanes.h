
@interface CMIStyleEngineCreateWeightPlanes : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _computePipelineStates;
    bool  _inputIsLinear;
    <MTLBuffer> * _inputPlaneNormalisationBuffer;
    <MTLTexture> * _inputTexture;
    <MTLBuffer> * _inputThresholdCalculationBuffer;
    <MTLTexture> * _outputWeightPlanesTexture;
    struct { 
        bool doColorSplit; 
        float standardDeviation; 
        float colorSplitStrength; 
    }  _params;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputIsLinear;
@property (nonatomic, retain) <MTLBuffer> *inputPlaneNormalisationBuffer;
@property (nonatomic, retain) <MTLTexture> *inputTexture;
@property (nonatomic, retain) <MTLBuffer> *inputThresholdCalculationBuffer;
@property (nonatomic, retain) <MTLTexture> *outputWeightPlanesTexture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (unsigned long long)_numberOfLumaWeightsToCreate;
- (int)enqueueToCommandBuffer:(id)arg1;
- (id)initWithMetalContext:(id)arg1 standardDeviation:(float)arg2 doColorSplit:(bool)arg3 colorSplitStrength:(float)arg4;
- (bool)inputIsLinear;
- (id)inputPlaneNormalisationBuffer;
- (id)inputTexture;
- (id)inputThresholdCalculationBuffer;
- (id)outputWeightPlanesTexture;
- (void)setInputIsLinear:(bool)arg1;
- (void)setInputPlaneNormalisationBuffer:(id)arg1;
- (void)setInputTexture:(id)arg1;
- (void)setInputThresholdCalculationBuffer:(id)arg1;
- (void)setOutputWeightPlanesTexture:(id)arg1;

@end
