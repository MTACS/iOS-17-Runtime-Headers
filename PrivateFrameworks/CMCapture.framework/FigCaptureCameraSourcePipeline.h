
@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline <BWVISOverscanPredictionDelegate> {
    NSMutableDictionary * _backgroundBlurNodesBySourceDeviceType;
    BWFigVideoCaptureDevice * _captureDevice;
    struct OpaqueFigCaptureSource { } * _captureSource;
    FigCaptureSourceDepthDataFormat * _captureSourceDepthDataFormat;
    FigCaptureSourceVideoFormat * _captureSourceVideoFormat;
    <BWCinematicFramingStatesProvider> * _cinematicFramingCameraStatesProvider;
    NSMutableDictionary * _cinematicFramingNodesBySourceDeviceType;
    BWNodeOutput * _depthOutput;
    int  _depthType;
    BWDeskCamNode * _deskCamNode;
    NSDictionary * _detectedObjectsOutputsBySourceDeviceType;
    int  _devicePosition;
    int  _deviceType;
    bool  _enableSlaveFrameSynchronizerForZoomPIPOnly;
    bool  _hardwareDepthFilteringEnabled;
    BWMultiStreamCameraSourceNode * _infraredSourceNode;
    int  _maxFrameRateClientOverride;
    BWMemoryPool * _memoryPool;
    unsigned int  _nextPointCloudOutputIndex;
    unsigned int  _nextVideoCaptureOutputIndexBySourceDeviceType;
    NSDictionary * _numberOfFaceTrackingConnectionConfigurationsBySourceDeviceType;
    bool  _overCapturePercentage;
    NSArray * _pointCloudOutputs;
    bool  _powerOptimizedVISOverscanEnabled;
    NSArray * _previewFilters;
    NSDictionary * _previewOutputsBySourceDeviceType;
    NSDictionary * _semanticMasksOutputsBySourceDeviceType;
    NSMutableArray * _sourceDeviceTypesWithLightSourceMaskAndKeypointDescriptorDataEnabledOnVideoCaptureOutputs;
    BWNodeOutput * _sourceFormatReferenceOutput;
    BWMultiStreamCameraSourceNode * _sourceNode;
    NSMutableArray * _sourceNodes;
    bool  _stillImageOutputDerivesFromVideoCaptureOutput;
    int  _stillImageOutputRetainedBufferCountOverride;
    NSDictionary * _stillImageOutputsByPortType;
    NSDictionary * _stillImageSensorRawOutputsByPortType;
    BWMultiStreamCameraSourceNode * _superWideSourceNode;
    NSMutableArray * _synchronizerNodes;
    BWMultiStreamCameraSourceNode * _telephotoSourceNode;
    bool  _useCaptureOutputForPreview;
    NSDictionary * _videoCaptureOutputsArrayBySourceDeviceType;
    bool  _videoHDRImageStatisticsEnabled;
    NSDictionary * _visionDataOutputsBySourceDeviceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)visOverscanPredictor:(id)arg1 allowsReducedOverscan:(bool)arg2;

@end
