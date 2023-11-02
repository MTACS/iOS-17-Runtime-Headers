
@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {
    int  _additionalOutputPoolRetainedBufferCount;
    bool  _applyRecommendedMasterPortType;
    bool  _awaitAsynchronousOutputs;
    bool  _backPressureDrivenPipelining;
    BWFigVideoCaptureDevice * _captureDevice;
    bool  _ignoreInvalidContentInformationForPrimaryMedia;
    BWInferenceEngine * _inferenceEngine;
    NSSet * _inferenceTypesToSkip;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inferenceTypesToSkipLock;
    id /* block */  _inferenceTypesToSkipResolver;
    bool  _passthroughInputSampleBuffer;
    id /* block */  _postprocessFilter;
    NSString * _recommendedMasterPortType;
}

@property (nonatomic) int additionalOutputPoolRetainedBufferCount;
@property (nonatomic) bool applyRecommendedMasterPortType;
@property (nonatomic) bool awaitAsynchronousOutputs;
@property (nonatomic) bool backPressureDrivenPipelining;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreInvalidContentInformationForPrimaryMedia;
@property (nonatomic, readonly) BWInferenceEngine *inferenceEngine;
@property (nonatomic, copy) id /* block */ inferenceTypesToSkipResolver;
@property (nonatomic) bool passthroughInputSampleBuffer;
@property (nonatomic, copy) id /* block */ postprocessFilter;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)addInferenceOfType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2;
- (int)addInferenceOfType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3;
- (int)additionalOutputPoolRetainedBufferCount;
- (bool)applyRecommendedMasterPortType;
- (bool)awaitAsynchronousOutputs;
- (bool)backPressureDrivenPipelining;
- (void)dealloc;
- (id)description;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)ignoreInvalidContentInformationForPrimaryMedia;
- (id)inferenceEngine;
- (id /* block */)inferenceTypesToSkipResolver;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (id)initWithScheduler:(id)arg1 priority:(unsigned int)arg2;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)passthroughInputSampleBuffer;
- (id /* block */)postprocessFilter;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAdditionalOutputPoolRetainedBufferCount:(int)arg1;
- (void)setApplyRecommendedMasterPortType:(bool)arg1;
- (void)setAwaitAsynchronousOutputs:(bool)arg1;
- (void)setBackPressureDrivenPipelining:(bool)arg1;
- (void)setIgnoreInvalidContentInformationForPrimaryMedia:(bool)arg1;
- (void)setInferenceTypesToSkipResolver:(id /* block */)arg1;
- (void)setInferencesToSkip:(id)arg1;
- (void)setPassthroughInputSampleBuffer:(bool)arg1;
- (void)setPostprocessFilter:(id /* block */)arg1;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { }*)arg1;

@end
