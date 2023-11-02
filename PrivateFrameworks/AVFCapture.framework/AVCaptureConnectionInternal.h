
@interface AVCaptureConnectionInternal : NSObject {
    bool  active;
    long long  activeVideoStabilizationMode;
    NSArray * audioChannelLevels;
    NSMutableArray * audioChannels;
    AVCaptureInputPort * audioInputPort;
    bool  automaticallyAdjustsVideoMirroring;
    AVCaptureInputPort * cameraCalibrationDataInputPort;
    bool  cameraIntrinsicMatrixDeliveryEnabled;
    bool  cameraIntrinsicMatrixDeliverySupported;
    int  changeSeed;
    NSString * connectionID;
    bool  debugMetadataSidecarFileEnabled;
    AVCaptureInputPort * depthDataInputPort;
    bool  enabled;
    bool  hasActiveObservers;
    bool  hasVideoMinFrameDurationObserver;
    NSMutableArray * inputPorts;
    long long  lastGetAudioLevelsTime;
    bool  livePhotoMetadataWritingEnabled;
    AVCaptureInputPort * metadataInputPort;
    AVCaptureInputPort * metadataItemInputPort;
    AVWeakReference * outputWeakReference;
    AVCaptureInputPort * pointCloudDataInputPort;
    long long  preferredVideoStabilizationMode;
    AVCaptureDevice * sourceDevice;
    AVCaptureDeviceInput * sourceDeviceInput;
    NSArray * supportedVideoMirroringMethodsForMovieRecording;
    bool  videoDeviceOrientationCorrectionEnabled;
    bool  videoDeviceOrientationCorrectionSupported;
    bool  videoGreenGhostMitigationEnabled;
    bool  videoGreenGhostMitigationSupported;
    AVCaptureInputPort * videoInputPort;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMaxFrameDuration;
    double  videoMaxScaleAndCropFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMinFrameDuration;
    bool  videoMirrored;
    long long  videoMirroringMethodForMovieRecording;
    bool  videoMirroringSupported;
    AVWeakReference * videoPreviewLayerWeakReference;
    int  videoRetainedBufferCountHint;
    double  videoRotationAngle;
    bool  videoRotationSupported;
    double  videoScaleAndCropFactor;
    bool  videoStabilizationEnabled;
    bool  videoZoomSmoothingEnabled;
    bool  videoZoomSmoothingSupported;
    AVCaptureInputPort * visionDataInputPort;
}

@end
