
@interface BWStillImageScalerNode : BWNode {
    struct OpaqueVTPixelTransferSession { } * _attachedMediaScalingSession;
    bool  _backPressureDrivenPipelining;
    bool  _blackFillingRequired;
    bool  _enforcesZoomingForPortraitCaptures;
    NSDictionary * _mainImageDownscalingFactorByAttachedMediaKey;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSDictionary * _outputSizeByAttachedMediaKey;
    NSMutableDictionary * _pixelBufferPoolByAttachedMediaKey;
    BWPixelBufferPool * _pool;
    int  _poolCapacity;
    NSMutableDictionary * _preparedVideoFormatByAttachedMediaKey;
    struct { 
        int width; 
        int height; 
    }  _resizedOutputDimensions;
    struct OpaqueVTPixelTransferSession { } * _scalingSession;
}

@property (nonatomic) struct { int x1; int x2; } resizedOutputDimensions;

+ (void)initialize;

- (bool)backPressureDrivenPipelining;
- (bool)blackFillingRequired;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)enforcesZoomingForPortraitCaptures;
- (id)initWithPoolCapacity:(int)arg1 nodeConfiguration:(id)arg2;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputSizeByAttachedMediaKey;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (struct { int x1; int x2; })resizedOutputDimensions;
- (void)setBackPressureDrivenPipelining:(bool)arg1;
- (void)setBlackFillingRequired:(bool)arg1;
- (void)setEnforcesZoomingForPortraitCaptures:(bool)arg1;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg1;
- (void)setOutputSizeByAttachedMediaKey:(id)arg1;
- (void)setResizedOutputDimensions:(struct { int x1; int x2; })arg1;

@end
