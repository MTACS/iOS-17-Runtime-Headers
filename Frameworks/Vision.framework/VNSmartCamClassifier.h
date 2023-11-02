
@interface VNSmartCamClassifier : VNEspressoModelClassifier

+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract {} *x1; struct __shared_weak_count {} *x2; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options { bool x1; unsigned long long x2; id x3; id x4; })arg6;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options { bool x1; unsigned long long x2; id x3; id x4; })arg5;
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;
+ (Class)espressoModelImageprintClass;
+ (void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2;
+ (id)returnAllResultsOptionKey;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;

@end
