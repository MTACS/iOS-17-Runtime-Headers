
@interface CMIStyleEngineIntegrateCoefficients : NSObject <CMIStyleEngineProcessingStage> {
    <MTLBuffer> * _inputCoefficientsBuffer;
    <MTLTexture> * _inputWeightPlanesTexture;
    <MTLComputePipelineState> * _integrateComputePipelineState;
    <MTLBuffer> * _linearSystemStatus;
    <MTLTexture> * _outputIntegratedCoefficientsTexture;
    void _spotlightCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLBuffer> *inputCoefficientsBuffer;
@property (nonatomic, retain) <MTLTexture> *inputWeightPlanesTexture;
@property (nonatomic, retain) <MTLBuffer> *linearSystemStatus;
@property (nonatomic, retain) <MTLTexture> *outputIntegratedCoefficientsTexture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (int)enqueueToCommandBuffer:(id)arg1;
- (id)initWithMetalContext:(void *)arg1 spotlightCount:(void *)arg2; // needs 2 arg types, found 1: id
- (id)inputCoefficientsBuffer;
- (id)inputWeightPlanesTexture;
- (id)linearSystemStatus;
- (id)outputIntegratedCoefficientsTexture;
- (void)setInputCoefficientsBuffer:(id)arg1;
- (void)setInputWeightPlanesTexture:(id)arg1;
- (void)setLinearSystemStatus:(id)arg1;
- (void)setOutputIntegratedCoefficientsTexture:(id)arg1;

@end
