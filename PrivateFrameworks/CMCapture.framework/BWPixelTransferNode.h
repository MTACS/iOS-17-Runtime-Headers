
@interface BWPixelTransferNode : BWNode <BWNodeBackPressureSource> {
    HDRProcessor * _HDRProcessingProcessor;
    bool  _allows422To420Conversion;
    bool  _appliesPrimaryCaptureRect;
    bool  _appliesUprightExifOrientationTransformToInput;
    int  _conversionMethodForStillImagesDuringHDRVideo;
    int  _cropMode;
    bool  _deviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    bool  _doGMLogging;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _expectsMarkerBuffers;
    bool  _firstFrameProcessed;
    bool  _flipHorizontal;
    bool  _flipVertical;
    bool  _fractionalSourceRectEnabled;
    bool  _generatesHistogram;
    bool  _haveLiveInputCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputCropRect;
    BWPixelBufferPool * _intermediateBufferPool;
    struct __CVBuffer { } * _intermediatePixelBufferForStillHDRToSDRConversion;
    struct { 
        int width; 
        int height; 
    }  _intermediatePoolDimensions;
    bool  _isConverting10BitVideoRangeTo8BitFullRangeEncouraged;
    int  _lastInputUprightExifOrientation;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    bool  _liveAppliesUprightExifOrientationTransformToInput;
    int  _liveCropMode;
    bool  _liveDeviceOrientationCorrectionEnabled;
    bool  _liveExpectsMarkerBuffers;
    bool  _liveFlipHorizontal;
    bool  _liveFlipVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _liveInputCropRect;
    bool  _liveLowSpeed;
    bool  _livePassesBuffersThroughWhenPossible;
    int  _liveRotationDegrees;
    bool  _liveUpdatesSampleBufferMetadataForIrisVIS;
    struct { 
        int width; 
        int height; 
    }  _liveValidOutputDimensions;
    bool  _liveZeroFillBuffers;
    bool  _lowSpeed;
    bool  _makeCurrentConfigurationLiveOnNextRenderCallback;
    int  _maxInputLossyCompressionLevel;
    int  _maxOutputLossyCompressionLevel;
    struct __IOSurfaceAccelerator { } * _msrScalerForHDRProcessing;
    int  _outputColorSpaceProperties;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned long long  _outputHeight;
    unsigned int  _outputPixelFormat;
    unsigned long long  _outputWidth;
    bool  _passesBuffersThroughWhenPossible;
    NSArray * _preferredOutputPixelFormats;
    int  _prevLiveDeviceOrientationCorrectionDegrees;
    int  _rotationDegrees;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
    int  _rotationSessionColorSpaceProperties;
    bool  _rotationSessionEnablesHistogram;
    bool  _rotationSessionFlipHorizontal;
    bool  _rotationSessionFlipVertical;
    bool  _rotationSessionLowSpeed;
    int  _rotationSessionRotationDegrees;
    bool  _rotationSessionZeroFillBuffers;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _updatesSampleBufferMetadataForIrisVIS;
    struct { 
        int width; 
        int height; 
    }  _validOutputDimensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property bool firstFrameProcessed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)allows422To420Conversion;
- (bool)appliesPrimaryCaptureRect;
- (bool)appliesUprightExifOrientationTransformToInput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (int)conversionMethodForStillImagesDuringHDRVideos;
- (int)cropMode;
- (void)dealloc;
- (bool)deviceOrientationCorrectionEnabled;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)emitSampleBufferSemaphore;
- (bool)expectsMarkerBuffers;
- (bool)firstFrameProcessed;
- (bool)flipHorizontal;
- (bool)flipVertical;
- (bool)generatesHistogram;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (id)init;
- (id)initWithfractionalSourceRectEnabled:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputCropRect;
- (bool)isConverting10BitVideoRangeTo8BitFullRangeEncouraged;
- (bool)lowSpeed;
- (void)makeCurrentConfigurationLive;
- (int)maxInputLossyCompressionLevel;
- (int)maxLossyCompressionLevel;
- (int)maxOutputLossyCompressionLevel;
- (id)nodeSubType;
- (id)nodeType;
- (int)outputColorSpaceProperties;
- (unsigned long long)outputHeight;
- (unsigned int)outputPixelFormat;
- (unsigned long long)outputWidth;
- (bool)passesBuffersThroughWhenPossible;
- (id)preferredOutputPixelFormats;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setAllows422To420Conversion:(bool)arg1;
- (void)setAppliesPrimaryCaptureRect:(bool)arg1;
- (void)setAppliesUprightExifOrientationTransformToInput:(bool)arg1;
- (void)setConversionMethodForStillImagesDuringHDRVideos:(int)arg1;
- (void)setConverting10BitVideoRangeTo8BitFullRangeEncouraged:(bool)arg1;
- (void)setCropMode:(int)arg1;
- (void)setDeviceOrientationCorrectionEnabled:(bool)arg1;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setExpectsMarkerBuffers:(bool)arg1;
- (void)setFirstFrameProcessed:(bool)arg1;
- (void)setFlipHorizontal:(bool)arg1;
- (void)setFlipVertical:(bool)arg1;
- (void)setGeneratesHistogram:(bool)arg1;
- (void)setInputCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLowSpeed:(bool)arg1;
- (void)setMaxInputLossyCompressionLevel:(int)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setMaxOutputLossyCompressionLevel:(int)arg1;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setPassesBuffersThroughWhenPossible:(bool)arg1;
- (void)setPreferredOutputPixelFormats:(id)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setUpdatesSampleBufferMetadataForIrisVIS:(bool)arg1;
- (void)setValidOutputDimensions:(struct { int x1; int x2; })arg1;
- (bool)updatesSampleBufferMetadataForIrisVIS;
- (struct { int x1; int x2; })validOutputDimensions;

@end
