
@interface BWStillImageFocusPixelDisparityNode : BWNode {
    bool  _depthIsAlwaysHighQuality;
    struct opaqueCMFormatDescription { } * _disparityFormatDescription;
    FigFocusPixelDisparityGenerator * _focusPixelDisparityGenerator;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _identityExtrinsicMatrix;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    float  _pixelSizeInMm;
    BWSensorConfiguration * _sensorConfiguration;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfiguration:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 depthIsAlwaysHighQuality:(bool)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
