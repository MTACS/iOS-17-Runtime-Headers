
@interface BWUBNodeConfiguration : BWStillImageNodeConfiguration {
    bool  _alwaysAllowModifyingInputBuffers;
    bool  _deepFusionSupportEnabled;
    bool  _deepFusionSyntheticsInNRSupportEnabled;
    bool  _deepFusionWaitForPreprocessingToFinish;
    int  _deepZoomVersion;
    bool  _demosaicedRawEnabled;
    unsigned int  _demosaicedRawPixelFormat;
    bool  _depthDataDeliveryEnabled;
    bool  _digitalFlashSupportEnabled;
    struct { 
        int width; 
        int height; 
    }  _disparityOutputDimensions;
    bool  _fusionSupportEnabled;
    float  _gainMapMainImageDownscalingFactor;
    bool  _generateLiDARDepth;
    struct { 
        int width; 
        int height; 
    }  _geometricDistortionCorrectionExpandedImageDimensions;
    int  _greenGhostMitigationVersion;
    int  _horizontalSensorBinningFactor;
    float  _inferenceMainImageDownscalingFactor;
    bool  _inputIs10Bit;
    bool  _intelligentDistortionCorrectionAppliesFinalDimensions;
    int  _intelligentDistortionCorrectionVersion;
    BWSensorConfiguration * _jasperSensorConfiguration;
    unsigned int  _learnedNRMode;
    int  _maxDeepFusionOutputCount;
    int  _maxNumberOfBurstCapturesAllowedInFlight;
    int  _minimumOutputBufferCount;
    int  _outputBufferCount;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    bool  _outputPoolBackPressureEnabled;
    int  _personSemanticsVersion;
    NSArray * _portTypesWithDepthSegmentationPortraitParameters;
    NSArray * _portTypesWithGeometricDistortionCorrectionEnabled;
    NSArray * _portTypesWithIntelligentDistortionCorrectionEnabled;
    NSDictionary * _providedInferenceAttachedMediaByMode;
    bool  _quadraProcessingSupportEnabled;
    NSDictionary * _rawColorCalibrationsByPortType;
    NSDictionary * _rawLensShadingCorrectionCoefficientsByPortType;
    struct { 
        int width; 
        int height; 
    }  _rawSensorDimensions;
    bool  _redEyeReductionEnabled;
    <BWStillImageProcessingStatusDelegate> * _referenceFrameSelectionDelegate;
    int  _retainedBufferCount;
    int  _semanticDevelopmentVersion;
    int  _semanticRenderingVersion;
    bool  _semanticStyleRenderingEnabled;
    NSArray * _sensorConfigurations;
    NSDictionary * _sensorConfigurationsByPortType;
    unsigned int  _sensorRawPixelFormat;
    bool  _shouldComputeDisparityWhenCalibrationFails;
    bool  _softISPSupportEnabled;
    int  _stillImageFusionScheme;
    int  _swfrVersion;
    bool  _ultraHighResolutionProcessingEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionSensorRawDimensions;
    int  _verticalSensorBinningFactor;
}

- (void)dealloc;

@end
