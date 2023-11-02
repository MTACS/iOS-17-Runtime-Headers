
@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding> {
    unsigned long long  _backingStore;
    NSDictionary * _boundComputeStageDevices;
    NSDictionary * _configurationOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _detectorMultiSessionAccessLock;
    VNMetalContext * _metalContext;
    VNControlledCapacityTasksQueue * _synchronizationQueue;
}

@property (nonatomic, readonly) unsigned long long backingStore;
@property (nonatomic, readonly, copy) NSDictionary *boundComputeStageDevices;
@property (readonly, copy) NSDictionary *configurationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VNMetalContext *metalContext;
@property (nonatomic, readonly) unsigned long long signPostAdditionalParameter;
@property (readonly) Class superclass;
@property (nonatomic, retain) VNControlledCapacityTasksQueue *synchronizationQueue;

+ (unsigned int)VNClassCode;
+ (id)_computeStageDeviceBindingsForConfiguration:(id)arg1 error:(id*)arg2;
+ (id)computeDeviceForComputeStage:(id)arg1 configurationOptions:(id)arg2 error:(id*)arg3;
+ (id)computeDeviceForConfiguredProcessingDeviceBridge:(id)arg1 computeStage:(id)arg2 supportedComputeDevices:(id)arg3 error:(id*)arg4;
+ (id)computeStageDevicesForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (Class)detectorClassForDetectorType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
+ (Class)detectorClassForDetectorType:(id)arg1 error:(id*)arg2;
+ (id)detectorCropCreationAsyncTasksQueue;
+ (id)detectorCropProcessingAsyncTasksQueue;
+ (id)detectorInternalProcessingAsyncTasksQueue;
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;
+ (id)detectorName;
+ (id)detectorWithConfigurationOptions:(id)arg1 forSession:(id)arg2 error:(id*)arg3;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)arg1;
+ (bool)isReentrant;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (bool)loadedInstanceWithBoundComputeStageDevices:(id)arg1 canBeUsedForRequestedComputeStageDevices:(id)arg2;
+ (bool)loadedInstanceWithComputeDevice:(id)arg1 boundToComputeStage:(id)arg2 canBeUsedForProcessingDeviceBridge:(id)arg3;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (void)runSuccessReportingBlockSynchronously:(id /* block */)arg1 detector:(id)arg2 qosClass:(unsigned int)arg3 error:(id*)arg4;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForEspressoModelAtPath:(id)arg1 inputImageBlobName:(id)arg2 analysisPixelFormatType:(unsigned int)arg3 error:(id*)arg4;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (unsigned long long)backingStore;
- (id)boundComputeDeviceForComputeStage:(id)arg1 error:(id*)arg2;
- (id)boundComputeStageDevices;
- (bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (id)computeDeviceForComputeStage:(id)arg1 processingOptions:(id)arg2 error:(id*)arg3;
- (id)computeDeviceOfTypes:(unsigned long long)arg1 forComputeStage:(id)arg2 processingOptions:(id)arg3 error:(id*)arg4;
- (id)configurationOptions;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)currentQueueIsSynchronizationQueue;
- (void)dealloc;
- (id)description;
- (bool)getOptionalCanceller:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
- (id)initWithConfigurationOptions:(id)arg1;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)metalContext;
- (bool)needsMetalContext;
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id*)arg2;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)processUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (void)recordImageCropQuickLookInfoFromOptions:(id)arg1 toObservation:(id)arg2;
- (void)recordImageCropQuickLookInfoFromOptionsSafe:(id)arg1 toObservation:(id)arg2;
- (void)recordImageCropQuickLookInfoToOptions:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;
- (void)recordImageCropQuickLookInfoToOptionsSafe:(id)arg1 cacheKey:(id)arg2 imageBuffer:(id)arg3;
- (id)requiredCancellerInOptions:(id)arg1 error:(id*)arg2;
- (void)setSynchronizationQueue:(id)arg1;
- (bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (unsigned long long)signPostAdditionalParameter;
- (id)synchronizationQueue;
- (bool)useGPU;
- (bool)validateImageBuffer:(id)arg1 error:(id*)arg2;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id*)arg2;
- (bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
