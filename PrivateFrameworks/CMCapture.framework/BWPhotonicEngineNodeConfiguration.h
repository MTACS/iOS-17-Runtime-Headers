
@interface BWPhotonicEngineNodeConfiguration : BWStillImageNodeConfiguration {
    bool  _alwaysAllowModifyingInputBuffers;
    bool  _cmiResourceEnabled;
    bool  _continuousZoomWithDepthSupported;
    bool  _dcProcessingWithDepthSupported;
    bool  _deepFusionSupportEnabled;
    bool  _deepFusionSyntheticsInNRSupportEnabled;
    bool  _deepFusionWaitForPreprocessingToFinish;
    int  _deepZoomMode;
    int  _deepZoomVersion;
    bool  _demosaicedRawEnabled;
    unsigned int  _demosaicedRawPixelFormat;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataOutputDimensions;
    bool  _digitalFlashSupportEnabled;
    bool  _fusionSupportEnabled;
    float  _gainMapMainImageDownscalingFactor;
    bool  _generateInferencesForSemanticProcessingIfNeeded;
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
    NSArray * _portTypesWithRawNightModeEnabled;
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
    struct { 
        int width; 
        int height; 
    }  _standardFormatDimensions;
    int  _stillImageFusionScheme;
    int  _stillImageProcessingMode;
    int  _swfrVersion;
    bool  _ultraHighResolutionProcessingEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionSensorRawDimensions;
    int  _verticalSensorBinningFactor;
    bool  _zoomingDisparityAllowed;
}

- (void)dealloc;

@end
