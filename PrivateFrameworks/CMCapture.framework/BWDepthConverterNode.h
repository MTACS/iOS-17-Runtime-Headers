
@interface BWDepthConverterNode : BWNode {
    bool  _backPressureDrivenPipelining;
    int  _baseRotationDegrees;
    NSDictionary * _cameraInfoByPortType;
    bool  _conversionAfterFilteringRequired;
    int  _depthAccuracy;
    int  _depthBufferFinalExifOrientation;
    int  _depthBufferOriginalExifOrientation;
    bool  _depthFromInfrared;
    bool  _depthIsAlwaysHighQuality;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _depthLensDistortionCorrectionBasePolynomial;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _depthLensDistortionCorrectionDynamicPolynomial;
    bool  _depthLensDistortionCorrectionPolynomialsAvailable;
    bool  _depthOriginatesFromNeuralNetwork;
    <DepthProcessor> * _depthProcessor;
    NSString * _depthProcessorClassName;
    int  _depthProcessorVersion;
    NSObject<OS_dispatch_queue> * _depthProcessorWorkerQueue;
    float  _depthRelativePixelSizeInMicrons;
    struct __CVBuffer { } * _filteringInputBuffer;
    struct __CVBuffer { } * _filteringOutputBuffer;
    struct __CVBuffer { } * _filteringScaledYUVBuffer;
    struct __CVBuffer { } * _fixedPointRotatedIntermediateBuffer;
    struct __CVBuffer { } * _fixedPointScaledIntermediateBuffer;
    bool  _forceCPath;
    int  _horizontalSensorBinningFactor;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _identityExtrinsicMatrix;
    struct { 
        int width; 
        int height; 
    }  _inputDepthDimensions;
    bool  _mirroringEnabled;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    unsigned int  _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    bool  _providesUnfilteredDepthAsAttachedMedia;
    int  _rotationDegrees;
    struct CMPhotoScaleAndRotateSession { } * _scaler;
    NSDictionary * _sensorIDDictionary;
    bool  _stillGDRFilteringSupportEnabled;
    BWStillImageNodeConfiguration * _stillImageNodeConfiguration;
    bool  _stillSMPFilteringSupportEnabled;
    struct __CVBuffer { } * _streamingFilteringScaledDepthInputBuffer;
    struct __CVBuffer { } * _streamingFilteringScaledDepthOutputBuffer;
    bool  _streamingGDRFilteringEnabled;
    bool  _streamingSMPFilteringEnabled;
    struct opaqueCMFormatDescription { } * _unfilteredDepthFormatDescription;
    struct OpaqueVTPixelTransferSession { } * _unfilteredDepthTransferSession;
    int  _verticalSensorBinningFactor;
}

+ (void)initialize;

- (int)baseRotationDegrees;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (int)horizontalSensorBinningFactor;
- (id)initWithStillImageNodeConfiguration:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDDictionary:(id)arg3 rgbPersonSegmentationEnabled:(bool)arg4 depthIsAlwaysHighQuality:(bool)arg5 depthOriginatesFromNeuralNetwork:(bool)arg6 backPressureDrivenPipelining:(bool)arg7;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (struct { int x1; int x2; })outputDimensions;
- (unsigned int)outputFormat;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)providesUnfilteredDepthAsAttachedMedia;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setBaseRotationDegrees:(int)arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setProvidesUnfilteredDepthAsAttachedMedia:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setStillGDRFilteringSupportEnabled:(bool)arg1;
- (void)setStillSMPFilteringSupportEnabled:(bool)arg1;
- (void)setStreamingGDRFilteringEnabled:(bool)arg1;
- (void)setStreamingSMPFilteringEnabled:(bool)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (bool)stillGDRFilteringSupportEnabled;
- (bool)stillSMPFilteringSupportEnabled;
- (bool)streamingGDRFilteringEnabled;
- (bool)streamingSMPFilteringEnabled;
- (int)verticalSensorBinningFactor;

@end
