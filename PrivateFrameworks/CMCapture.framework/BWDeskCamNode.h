
@interface BWDeskCamNode : BWNode <BWFigVideoCaptureDeviceOverheadCameraModeChangedDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSDictionary * _cameraInfoByPortType;
    BWFigVideoCaptureDevice * _captureDevice;
    NSString * _clientApplicationID;
    DeskCamSession * _deskCamSession;
    BWNodeInput * _detectionMetadataInput;
    BWNodeOutput * _detectionMetadataOutput;
    NSString * _deviceModelName;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    int  _horizontalSensorBinningFactor;
    int  _maxLossyCompressionLevel;
    unsigned int  _minLuxLevelNeeded;
    unsigned short  _numberOfFramesReceivedBeforeFocusUpdate;
    unsigned short  _numberOfFramesReceivedSinceLastFocusUpdate;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    int  _overheadCameraMode;
    NSString * _portType;
    unsigned int  _stillCaptureEnqueueIndex;
    struct { 
        struct __CVBuffer {} *pixelBuffer; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
    }  _stillCaptureQueue;
    bool  _stillImageCaptureEnabled;
    BWNodeInput * _stillImageInput;
    BWNodeOutput * _stillImageOutput;
    struct OpaqueVTPixelTransferSession { } * _stillImagePixelTransferSession;
    int  _verticalSensorBinningFactor;
    BWNodeInput * _videoCaptureInput;
    BWNodeOutput * _videoCaptureOutput;
}

@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BWNodeInput *detectionMetadataInput;
@property (nonatomic, readonly) BWNodeOutput *detectionMetadataOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeInput *stillImageInput;
@property (nonatomic, readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BWNodeInput *videoCaptureInput;
@property (nonatomic, readonly) BWNodeOutput *videoCaptureOutput;

+ (void)initialize;

- (id)clientApplicationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)detectionMetadataInput;
- (id)detectionMetadataOutput;
- (void)didChangeOverheadCameraMode:(int)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 cameraInfoByPortType:(id)arg2 horizontalSensorBinningFactor:(int)arg3 verticalSensorBinningFactor:(int)arg4 stillImageCaptureEnabled:(bool)arg5 objectMetadataIdentifiers:(id)arg6 maxLossyCompressionLevel:(int)arg7 portType:(id)arg8 deviceModelName:(id)arg9 overheadCameraMode:(int)arg10 captureDevice:(id)arg11;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setClientApplicationID:(id)arg1;
- (id)stillImageInput;
- (id)stillImageOutput;
- (id)videoCaptureInput;
- (id)videoCaptureOutput;

@end
