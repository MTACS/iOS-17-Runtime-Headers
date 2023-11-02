
@interface BWDeepFusionProcessorInput : BWStillImageProcessorControllerInput {
    bool  _allInferencesDelivered;
    bool  _canProcessEnhancedResolution;
    <BWDeepFusionProcessorInputDelegate> * _delegate;
    NSDictionary * _evZeroReferenceFrameAttachments;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _evZeroReferenceFramePTS;
    NSDictionary * _inferenceAttachedMediaMetadata;
    NSMutableArray * _inputBuffers;
    bool  _onlyApplyingSemanticStyle;
    bool  _processInferenceInputImage;
    bool  _processQuadraForEnhancedResolutionInferenceInputImage;
    NSArray * _providedInferenceAttachedMedia;
    NSDictionary * _quadraForEnhancedResolutionMetadata;
}

@property (nonatomic) bool canProcessEnhancedResolution;
@property (nonatomic, retain) <BWDeepFusionProcessorInputDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } evZeroReferenceFramePTS;
@property (nonatomic, readonly) NSArray *inputBuffers;
@property (nonatomic, readonly) bool onlyApplyingSemanticStyle;
@property (nonatomic, readonly) bool processInferenceInputImage;
@property (nonatomic, readonly) bool processQuadraForEnhancedResolutionInferenceInputImage;
@property (nonatomic, retain) NSArray *providedInferenceAttachedMedia;
@property (nonatomic, readonly) NSDictionary *quadraForEnhancedResolutionMetadata;

+ (id)inputForOnlyApplyingSemanticStyleWithSettings:(id)arg1 portType:(id)arg2;

- (void)addBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 bufferType:(unsigned long long)arg3;
- (void)addBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 bufferType:(unsigned long long)arg3 lscGainMap:(struct __CVBuffer { }*)arg4 lscGainMapParameters:(id)arg5;
- (void)allInferencesDelivered;
- (void)beginProcessingCachedBuffers;
- (bool)canProcessEnhancedResolution;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)evZeroReferenceFrameAttachments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })evZeroReferenceFramePTS;
- (id)initWithSettings:(id)arg1 portType:(id)arg2 processInferenceInputImage:(bool)arg3 processQuadraForEnhancedResolutionInferenceInputImage:(bool)arg4;
- (id)inputBuffers;
- (bool)onlyApplyingSemanticStyle;
- (bool)processInferenceInputImage;
- (bool)processQuadraForEnhancedResolutionInferenceInputImage;
- (id)providedInferenceAttachedMedia;
- (id)quadraForEnhancedResolutionMetadata;
- (void)releaseInputBuffers;
- (void)setCanProcessEnhancedResolution:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvZeroReferenceFrameAttachments:(id)arg1;
- (void)setEvZeroReferenceFramePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setProvidedInferenceAttachedMedia:(id)arg1;

@end
