
@interface AWBProcessor : NSObject <AWBImageBufferProcessor> {
    bool  _allocatorSetupComplete;
    AWBAlgorithm * _awbAlgo;
    <AWBIBPParams> * _awbParams;
    AWBStatistics * _awbStat;
    bool  _configured;
    CMIExternalMemoryResource * _externalMemoryResource;
    <MTLCommandQueue> * _metalCommandQueue;
    FigMetalContext * _metalContext;
    NSMutableDictionary * _stats;
    NSDictionary * _tuningParameters;
    NSDictionary * cameraInfoByPortType;
}

@property (nonatomic, readonly) <AWBIBPParams> *awbParams;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMIExternalMemoryResource *externalMemoryResource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsExternalMemoryResource;
@property (nonatomic, retain) NSDictionary *tuningParameters;

+ (int)calculateSTRBKeyFromWideCamera:(struct { int x1; union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; } x_2_1_3; } x2; }*)arg1 moduleConfig:(id)arg2;
+ (int)getColorCalibrationsUsingIdealColorCalbrations:(id)arg1 absoluteColorCalibrations:(id)arg2 colorCalibrationsOut:(id*)arg3 awbConfig:(id)arg4;

- (void).cxx_destruct;
- (id)awbParams;
- (id)cameraInfoByPortType;
- (id)externalMemoryResource;
- (int)finishProcessing;
- (id)metalCommandQueue;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setExternalMemoryResource:(id)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (id)tuningParameters;

@end
