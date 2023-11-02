
@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowBackgroundGPUComputeSetting;
    bool  _allowLowPrecisionAccumulationOnGPU;
    bool  _allowsInstrumentation;
    long long  _computeUnits;
    bool  _enableTestVectorMode;
    long long  _experimentalMLE5EngineUsage;
    NSString * _modelDisplayName;
    NSDictionary * _parameters;
    NSString * _parentModelName;
    long long  _predictionConcurrencyHint;
    <MTLDevice> * _preferredMetalDevice;
    bool  _preparesLazily;
    long long  _profilingOptions;
    NSURL * _rootModelURL;
    bool  _trainWithMLCompute;
    bool  _usePreloadedKey;
    bool  _useWatchSPIForScribble;
}

@property (nonatomic) bool allowBackgroundGPUCompute;
@property bool allowBackgroundGPUComputeSetting;
@property (nonatomic) bool allowFloat16AccumulationOnGPU;
@property bool allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) bool allowsInstrumentation;
@property long long computeUnits;
@property (nonatomic) bool enableTestVectorMode;
@property (nonatomic) long long experimentalMLE5EngineUsage;
@property (copy) NSString *modelDisplayName;
@property (retain) NSDictionary *parameters;
@property (nonatomic, retain) NSString *parentModelName;
@property (nonatomic) long long predictionConcurrencyHint;
@property (nonatomic, retain) <MTLDevice> *preferredMTLDevice;
@property (nonatomic, retain) <MTLDevice> *preferredMetalDevice;
@property (nonatomic) bool preparesLazily;
@property (nonatomic) long long profilingOptions;
@property (retain) NSURL *rootModelURL;
@property bool trainWithMLCompute;
@property (nonatomic) bool usePreloadedKey;
@property (nonatomic) bool useWatchSPIForScribble;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowBackgroundGPUCompute;
- (bool)allowBackgroundGPUComputeSetting;
- (bool)allowFloat16AccumulationOnGPU;
- (bool)allowLowPrecisionAccumulationOnGPU;
- (bool)allowsInstrumentation;
- (long long)computeUnits;
- (id)computeUnitsToString:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enableTestVectorMode;
- (void)encodeWithCoder:(id)arg1;
- (long long)experimentalMLE5EngineUsage;
- (id)experimentalMLE5EngineUsageToString:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComputeUnits:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelConfiguration:(id)arg1;
- (id)modelDisplayName;
- (id)parameters;
- (id)parentModelName;
- (long long)predictionConcurrencyHint;
- (id)preferredMTLDevice;
- (id)preferredMetalDevice;
- (bool)preparesLazily;
- (long long)profilingOptions;
- (id)rootModelURL;
- (void)setAllowBackgroundGPUCompute:(bool)arg1;
- (void)setAllowBackgroundGPUComputeSetting:(bool)arg1;
- (void)setAllowFloat16AccumulationOnGPU:(bool)arg1;
- (void)setAllowLowPrecisionAccumulationOnGPU:(bool)arg1;
- (void)setAllowsInstrumentation:(bool)arg1;
- (void)setComputeUnits:(long long)arg1;
- (void)setEnableTestVectorMode:(bool)arg1;
- (void)setExperimentalMLE5EngineUsage:(long long)arg1;
- (void)setModelDisplayName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setParentModelName:(id)arg1;
- (void)setPredictionConcurrencyHint:(long long)arg1;
- (void)setPreferredMTLDevice:(id)arg1;
- (void)setPreferredMetalDevice:(id)arg1;
- (void)setPreparesLazily:(bool)arg1;
- (void)setProfilingOptions:(long long)arg1;
- (void)setRootModelURL:(id)arg1;
- (void)setTrainWithMLCompute:(bool)arg1;
- (void)setUsePreloadedKey:(bool)arg1;
- (void)setUseWatchSPIForScribble:(bool)arg1;
- (bool)trainWithMLCompute;
- (bool)usePreloadedKey;
- (bool)useWatchSPIForScribble;

// Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning

- (bool)patchOrderedLayerNames:(id)arg1 shapes:(id)arg2 withData:(id)arg3;

@end
