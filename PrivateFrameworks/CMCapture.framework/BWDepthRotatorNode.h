
@interface BWDepthRotatorNode : BWNode {
    long long  _bufferSerialNumber;
    bool  _depthProvidedAsAttachedMedia;
    struct { 
        int width; 
        int height; 
    }  _inputDepthDimensions;
    unsigned int  _inputDepthFormat;
    struct opaqueCMFormatDescription { } * _outputDYFormatDescription;
    struct opaqueCMFormatDescription { } * _outputDepthFormatDescription;
    int  _rotationDegrees;
    bool  _separateDepthComponentsEnabled;
}

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithRotationDegrees:(int)arg1 separateDepthComponentsEnabled:(bool)arg2 depthProvidedAsAttachedMedia:(bool)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
