
@interface SwiftVideoProcessor : NSObject {
    void area;
    void avl;
    void bufferConstants;
    void bufferContrast;
    void bufferContrastKernel;
    void bufferCurState;
    void bufferData;
    void bufferDataDebug;
    void bufferEnergy;
    void bufferEnergy2;
    void bufferFrameLumaSum;
    void bufferGammaKernel;
    void bufferResponses;
    void bufferResponsesNorm;
    void bufferResults;
    void cA;
    void commandQueue;
    void copySourceOnlyDebugging;
    void cptPSO_RiskComputePass0;
    void cptPSO_RiskComputePass1;
    void cptPSO_RiskComputePass2;
    void cptPSO_RiskComputePass3;
    void debugMode;
    void device;
    void energyPoolExponent;
    void energyPoolGammaScale;
    void energyPoolGammaShape;
    void fps;
    void frameDeltas;
    void framePoolIndex;
    void gain;
    void idxEquivalentKernelIndex;
    void idxEquivalentSize;
    void idxFrameRate;
    void inTestingMode;
    void library;
    void needsInitialization;
    void nits;
    void previousSurfaceTime;
    void probabilityPoolExponent;
    void probabilityPoolGammaShape;
    void processedTexture;
    void protectionStatus;
    void sourceCbCrTexture;
    void sourceTexture;
    void tauAdapt;
    void tauMitigation;
    void validationCallback;
}

@property (nonatomic) bool copySourceOnlyDebugging;
@property (nonatomic) bool debugMode;
@property (nonatomic) bool inTestingMode;
@property (nonatomic, copy) id /* block */ validationCallback;

- (void).cxx_destruct;
- (bool)copySourceOnlyDebugging;
- (bool)debugMode;
- (bool)inTestingMode;
- (id)init;
- (void)processSurfaceWithSourceSurface:(id)arg1 timestamp:(double)arg2 destinationSurface:(id)arg3 options:(id)arg4;
- (void)setCopySourceOnlyDebugging:(bool)arg1;
- (void)setDebugMode:(bool)arg1;
- (void)setInTestingMode:(bool)arg1;
- (void)setValidationCallback:(id /* block */)arg1;
- (id /* block */)validationCallback;

@end
