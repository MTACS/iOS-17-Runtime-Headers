
@interface MLCPlatformInfo : NSObject

+ (id)aneGraphPartitioningConfigEnvVariable;
+ (id)aneKeepPlistEnvVariable;
+ (id)aneSaveGraphPartitioningConfig;
+ (id)aneSubType;
+ (int)aneSubTypeVersion;
+ (bool)aneUsageUnsupported;
+ (id)bootArgs;
+ (id)buildVersion;
+ (int)getMinGpuSocVersionForMicroBenchmark;
+ (id)getRandomSeed;
+ (bool)gpuUsageUnsupported;
+ (bool)gpuUsageUnsupportedIncludingLowPower:(bool)arg1;
+ (bool)gpuUseMPSGraphConvolution;
+ (bool)isAneGraphPartitioningConfigSet;
+ (bool)isAnePlistKept;
+ (bool)isAneSaveGraphPartitioningConfigSet;
+ (bool)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)arg1;
+ (bool)isInternalBuild;
+ (bool)isRNGSeeded;
+ (id)mpsGraphConvolutionEnvVariable;
+ (bool)multiGPUUsageUnsupported;
+ (id)osVersion;
+ (long long)randomSeed;
+ (id)seedEnvVariable;
+ (void)setRandomSeedTo:(id)arg1;

@end
