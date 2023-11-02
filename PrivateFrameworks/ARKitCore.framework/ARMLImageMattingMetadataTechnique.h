
@interface ARMLImageMattingMetadataTechnique : ARImageBasedTechnique {
    struct __CVPixelBufferPool { } * _bgraMattingPixelBufferPool;
    struct vImageCVImageFormat { } * _cvImageFormatRef;
    bool  _deterministic;
    bool  _enableDoubleMLResolutionForIPad;
    ARImageScalingTechnique * _mattingImageScalingTechnique;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _shouldOperateOnHighResolutionImages;
}

@property (nonatomic) bool shouldOperateOnHighResolutionImages;

- (void).cxx_destruct;
- (id)_generateMattingMetadata:(id)arg1;
- (void)_processDataInBackgound:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setShouldOperateOnHighResolutionImages:(bool)arg1;
- (bool)shouldOperateOnHighResolutionImages;

@end
