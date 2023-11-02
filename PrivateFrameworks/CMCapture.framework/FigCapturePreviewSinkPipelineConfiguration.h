
@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    bool  _cinematicVideoEnabled;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _clientIsCameraOrDerivative;
    bool  _deferredPrepareEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    bool  _depthFromMonocularNetworkEnabled;
    bool  _focusBlurMapForDepthFiltersEnabled;
    bool  _generatesHistogram;
    int  _maxLossyCompressionLevel;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    bool  _overCaptureEnabled;
    bool  _previewStabilizationEnabled;
    FigVideoCaptureConnectionConfiguration * _previewTimeMachineConnectionConfiguration;
    bool  _primaryCaptureRectModificationEnabled;
    bool  _remoteVideoPreview;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _sceneClassifierPipelineVersion;
    bool  _smartCameraMotionDetectionEnabled;
    int  _sourceColorSpaceProperties;
    bool  _sourceIsBravoDevice;
    bool  _sourcePixelFormatIsFullRange;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    bool  _videoHDRImageStatisticsEnabled;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    double  _videoStabilizationOverscan;
    FigVideoCaptureConnectionConfiguration * _videoThumbnailConnectionConfiguration;
    bool  _vitalityScoringEnabled;
    float  _zoomPIPMinimumUIZoomFactor;
    bool  _zoomPIPSingleStreamModeEnabled;
    float  _zoomPIPSlaveStreamingFrameRate;
}

- (void)dealloc;

@end
