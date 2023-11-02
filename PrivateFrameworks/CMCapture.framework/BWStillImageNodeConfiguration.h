
@interface BWStillImageNodeConfiguration : NSObject {
    struct { 
        int width; 
        int height; 
    }  _deepFusionEnhancedResolutionDimensions;
    bool  _deferredCaptureSupportEnabled;
    bool  _deferredPhotoProcessorEnabled;
    int  _depthDataType;
    struct { 
        int width; 
        int height; 
    }  _downgradedDeepFusionEnhancedResolutionDimensions;
    unsigned int  _figThreadPriority;
    BWInferenceScheduler * _inferenceScheduler;
    int  _maxLossyCompressionLevel;
    <MTLCommandQueue> * _metalCommandQueue;
    bool  _optimizedEnhancedResolutionDepthPipelineEnabled;
    int  _pearlModuleType;
}

@property (nonatomic) struct { int x1; int x2; } deepFusionEnhancedResolutionDimensions;
@property (nonatomic) bool deferredCaptureSupportEnabled;
@property (nonatomic) bool deferredPhotoProcessorEnabled;
@property (nonatomic) int depthDataType;
@property (nonatomic) struct { int x1; int x2; } downgradedDeepFusionEnhancedResolutionDimensions;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic, retain) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) int maxLossyCompressionLevel;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic) bool optimizedEnhancedResolutionDepthPipelineEnabled;
@property (nonatomic) int pearlModuleType;

- (void)dealloc;
- (struct { int x1; int x2; })deepFusionEnhancedResolutionDimensions;
- (bool)deferredCaptureSupportEnabled;
- (bool)deferredPhotoProcessorEnabled;
- (int)depthDataType;
- (struct { int x1; int x2; })downgradedDeepFusionEnhancedResolutionDimensions;
- (unsigned int)figThreadPriority;
- (id)inferenceScheduler;
- (int)maxLossyCompressionLevel;
- (id)metalCommandQueue;
- (bool)optimizedEnhancedResolutionDepthPipelineEnabled;
- (int)pearlModuleType;
- (void)setDeepFusionEnhancedResolutionDimensions:(struct { int x1; int x2; })arg1;
- (void)setDeferredCaptureSupportEnabled:(bool)arg1;
- (void)setDeferredPhotoProcessorEnabled:(bool)arg1;
- (void)setDepthDataType:(int)arg1;
- (void)setDowngradedDeepFusionEnhancedResolutionDimensions:(struct { int x1; int x2; })arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setInferenceScheduler:(id)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setOptimizedEnhancedResolutionDepthPipelineEnabled:(bool)arg1;
- (void)setPearlModuleType:(int)arg1;

@end
