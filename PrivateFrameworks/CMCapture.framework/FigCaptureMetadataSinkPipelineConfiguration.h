
@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    bool  _boxedMetadataEnabled;
    bool  _deferredPrepareEnabled;
    NSArray * _detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    int  _inputRotationRelativeToSource;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    int  _motionAttachmentsSource;
    bool  _mrcLowPowerModeEnabled;
    int  _pearlModuleType;
    bool  _previewEnabled;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _smartCameraPipelineVersion;
    bool  _useSceneClassifierToGateMetadataDetectors;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
}

- (void)dealloc;

@end
