
@interface PAEStyleTransfer : PAEFilterDefaultBase {
    TwoNetsStyleTransfer * _aneNetwork;
    struct HGRef<HStyleTransfer_ANE::RenderContext> { 
        struct RenderContext {} *m_Obj; 
    }  _aneRenderContext;
    double  _currentAspectRatio;
    long long  _currentQualityLevel;
    bool  _firstModelLoadLog;
    bool  _gpuDefaultsLoaded;
    EspressoImage2Image * _gpuNetwork;
    NSString * _modelName;
}

@property (nonatomic, retain) TwoNetsStyleTransfer *aneNetwork;
@property (nonatomic) double currentAspectRatio;
@property (nonatomic) long long currentQualityLevel;
@property (nonatomic, retain) EspressoImage2Image *gpuNetwork;

+ (bool)hasEspressoVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_bundleForFilter;
- (id)_modelPath:(id)arg1;
- (bool)addParameters;
- (id)aneModelPath:(id)arg1;
- (id)aneNetwork;
- (bool)buildANERenderGraph:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3 modelName:(id)arg4 qualityLevel:(long long)arg5;
- (bool)buildGPURenderGraph:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3 modelName:(id)arg4 qualityLevel:(long long)arg5;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (double)currentAspectRatio;
- (long long)currentQualityLevel;
- (void)dealloc;
- (id)gpuModelPath:(id)arg1;
- (id)gpuNetwork;
- (id)initWithAPIManager:(id)arg1;
- (bool)loadANEModel:(id)arg1;
- (bool)loadGPUModel:(id)arg1;
- (id)pathForGPUSettings;
- (id)properties;
- (void)registerGPUDefaults;
- (struct PAEStyleTransferResourceTestResult { int x1; id x2; bool x3; })renderResourceForQuality:(long long)arg1 forModel:(id)arg2;
- (void)setAneNetwork:(id)arg1;
- (void)setCurrentAspectRatio:(double)arg1;
- (void)setCurrentQualityLevel:(long long)arg1;
- (void)setGpuNetwork:(id)arg1;
- (void)setupGPUNetwork;
- (bool)variesOverTime;

@end
