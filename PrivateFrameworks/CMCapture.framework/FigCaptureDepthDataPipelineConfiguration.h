
@interface FigCaptureDepthDataPipelineConfiguration : NSObject {
    NSDictionary * _cameraInfoByPortType;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _depthConvertedUpstream;
    int  _depthDataBaseRotationDegrees;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    bool  _hardwareDepthFilteringEnabled;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    int  _pearlModuleType;
    BWPipelineStage * _pipelineStage;
    FigCaptureSourceVideoFormat * _requiredFormat;
    bool  _videoAndConvertedDepthDataOutputEnabled;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

- (void)dealloc;

@end
