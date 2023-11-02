
@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {
    bool  _RGBIRStereoFusionEnabled;
    unsigned int  _RGBIRStereoFusionFixedDepthThresholdMM;
    unsigned int  _RGBIRStereoFusionFixedDepthValueMM;
    unsigned int  _RGBIRStereoFusionMaxDepthThresholdMM;
    unsigned int  _RGBIRStereoFusionMinDepthThresholdMM;
    bool  _actionCameraEnabled;
    float  _additionalVISOverscanWhenRecording;
    int  _autoImageControlMode;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    struct { 
        int width; 
        int height; 
    }  _captureDimensionsForFSDNetSecondary;
    bool  _clientIsCameraOrDerivative;
    bool  _clockSynchronizationEnabled;
    bool  _configureForDigitalFlashSupport;
    bool  _configureForSIFRStillImageCaptureIfAvailable;
    bool  _configureForSoftISPSupport;
    bool  _configureForSpatialOverCaptureSupport;
    bool  _configureForZeroShutterLagSupport;
    int  _continuityCameraClientDeviceClass;
    bool  _continuityCameraIsWired;
    bool  _coreMediaFaceTrackingEnabled;
    bool  _deferredTimeOfFlightNodePrepareEnabled;
    bool  _depthConversionEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    struct { 
        int width; 
        int height; 
    }  _depthDimensionsOverride;
    bool  _depthOutputEnabled;
    int  _depthType;
    bool  _enableStillImageSensorOverscanIfAvailable;
    bool  _forceCNRDisabled;
    bool  _graphContainsMultipleVideoSources;
    bool  _ispFaceTrackingEnabled;
    bool  _lumaHistogramsEnabled;
    float  _maxContinuousZoomFactorForDepthDataDelivery;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationFrameworkOverride;
    NSArray * _metadataObjectConnectionConfigurations;
    bool  _midFrameSynchronizationEnabled;
    int  _motionAttachmentsSource;
    NSArray * _movieFileDetectedObjectMetadataConnectionConfigurations;
    int  _movieFileMaxLossyCompressionLevel;
    bool  _offlineVISEnabled;
    float  _overCapturePercentage;
    NSArray * _pointCloudDataConnectionConfigurations;
    NSString * _preferredMasterPortType;
    NSArray * _previewDerivedConnectionConfigurations;
    bool  _previewGeometricDistortionCorrectionEnabled;
    int  _previewMaxLossyCompressionLevel;
    bool  _sensorRawStillImageOutputsEnabledIfAvailable;
    bool  _softISPEnabled;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    int  _stillImageFocusPixelDataRetainedBufferCount;
    bool  _stillImageGeometricDistortionCorrectionEnabled;
    bool  _stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
    bool  _stillImageLocalHistogramClippingDataMetadataEnabled;
    int  _stillImageMaxLossyCompressionLevel;
    int  _stillImageOutputRetainedBufferCountOverride;
    bool  _stillImageOutputSushiRawAttachmentOptionEnabled;
    int  _stillImageSashimiRawRetainedBufferCount;
    int  _stillImageSensorInterfaceRawRetainedBufferCount;
    bool  _streamingCameraCalibrationDataDeliveryEnabled;
    bool  _streamingForegroundSegmentationEnabled;
    bool  _strictDepthModePreferred;
    bool  _structuredLightAFAssistEnabled;
    bool  _suppressVideoEffects;
    NSArray * _videoCaptureConnectionConfigurations;
    bool  _videoCaptureGeometricDistortionCorrectionEnabled;
    int  _videoDataMaxLossyCompressionLevel;
    bool  _videoHDRImageStatisticsEnabled;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    bool  _videoSTFMetadataEnabled;
    NSArray * _videoStabilizationTypes;
    NSArray * _visionDataConnectionConfigurations;
    bool  _zeroShutterLagEnabled;
    float  _zoomPIPMinimumUIZoomFactor;
    bool  _zoomPIPSingleStreamModeEnabled;
    float  _zoomPIPSlaveStreamingFrameRate;
}

- (void)dealloc;

@end
