
@interface BWCinematicFramingNode : BWNode <BWCinematicFramingStatesProvider, BWFigVideoCaptureDeviceCenterStageDelegate, BWFigVideoCaptureDeviceManualCinematicFramingDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    bool  _cameraHasCalibrationValidMaxRadius;
    bool  _cameraHasDistoritionCoefficients;
    NSDictionary * _cameraInfoByPortType;
    unsigned int  _cinematicFramingControlMode;
    struct { 
        bool autoFramingEnabled; 
        bool fieldOfViewRestrictedToWide; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } outputFramingRectOfInterest; 
        int centerStageFramingMode; 
        float videoZoomFactor; 
        float panningAngleX; 
        float panningAngleY; 
        double manualFramingDefaultZoomFactor; 
    }  _cinematicFramingControls;
    NSString * _clientApplicationID;
    NSMutableDictionary * _detectionMetadataInputsByPortType;
    BWNodeOutput * _detectionMetadataOutput;
    NSString * _deviceModelName;
    bool  _deviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    int  _endOfDataMetadataInputsCount;
    int  _endOfDataVideoInputsCount;
    int  _horizontalSensorBinningFactor;
    bool  _manualFramingControlsSuspended;
    int  _maxLossyCompressionLevel;
    unsigned int  _maxPeopleDetected;
    bool  _metadataOutputFormatIsLive;
    unsigned int  _minLuxLevelNeeded;
    bool  _oneShotFramingInFlight;
    bool  _outputCameraResetInFlight;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSArray * _portTypes;
    unsigned int  _stillCaptureEnqueueIndex;
    struct { 
        VCCamera *inputCamera; 
        VCCamera *outputCamera; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } outputROI; 
    }  _stillCaptureQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stillCaptureQueueLock;
    bool  _stillImageCaptureEnabled;
    VCProcessor * _vcProcessor;
    int  _verticalSensorBinningFactor;
    NSMutableDictionary * _videoCaptureInputsByPortType;
    BWNodeOutput * _videoCaptureOutput;
    bool  _videoOutputFormatIsLive;
}

@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) struct { bool x1; bool x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; int x4; float x5; float x6; float x7; double x8; } cinematicFramingControls;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *detectionMetadataInputsByPortType;
@property (nonatomic, readonly) BWNodeOutput *detectionMetadataOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool manualFramingControlsSuspended;
@property (nonatomic) double manualFramingVideoZoomFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *videoCaptureInputsByPortType;
@property (nonatomic, readonly) BWNodeOutput *videoCaptureOutput;

+ (void)initialize;

- (unsigned int)cinematicFramingControlMode;
- (struct { bool x1; bool x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; int x4; float x5; float x6; float x7; double x8; })cinematicFramingControls;
- (id)clientApplicationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)copyCameraStatesForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (id)detectionMetadataInputsByPortType;
- (id)detectionMetadataOutput;
- (void)didChangeCenterStageFramingMode:(int)arg1;
- (void)didChangeCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 cameraInfoByPortType:(id)arg2 horizontalSensorBinningFactor:(int)arg3 verticalSensorBinningFactor:(int)arg4 deviceOrientationCorrectionEnabled:(bool)arg5 stillImageCaptureEnabled:(bool)arg6 objectMetadataIdentifiers:(id)arg7 maxLossyCompressionLevel:(int)arg8 portTypes:(id)arg9 deviceModelName:(id)arg10 cinematicFramingControls:(struct { bool x1; bool x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; int x4; float x5; float x6; float x7; double x8; })arg11 cameraHasDistortionCoefficients:(bool)arg12 cameraHasCalibrationValidMaxRadius:(bool)arg13;
- (bool)manualFramingControlsSuspended;
- (double)manualFramingVideoZoomFactor;
- (id)nodeSubType;
- (id)nodeType;
- (void)panWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)performOneShotFraming;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resetFraming;
- (void)restrictCenterStageFieldOfViewToWide:(bool)arg1;
- (void)setCinematicFramingControlMode:(unsigned int)arg1;
- (void)setCinematicFramingControls:(struct { bool x1; bool x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; int x4; float x5; float x6; float x7; double x8; })arg1;
- (void)setClientApplicationID:(id)arg1;
- (void)setManualFramingControlsSuspended:(bool)arg1;
- (void)setManualFramingVideoZoomFactor:(double)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)videoCaptureInputsByPortType;
- (id)videoCaptureOutput;

@end
