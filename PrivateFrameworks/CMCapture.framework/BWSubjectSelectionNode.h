
@interface BWSubjectSelectionNode : BWNode <BWFigVideoCaptureDeviceSubjectSelectionDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    bool  _cameraHasCalibrationValidMaxRadius;
    bool  _cameraHasDistortionCoefficients;
    NSDictionary * _cameraInfoByPortType;
    int  _centerStageFramingMode;
    NSString * _deviceModelName;
    bool  _deviceOrientationCorrectionEnabled;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    int  _endOfDataInputsCount;
    bool  _gazeSelectionEnabled;
    int  _horizontalSensorBinningFactor;
    unsigned int  _minLuxLevelNeeded;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    NSArray * _portTypes;
    SubjectSelectionSession * _subjectSelectionSession;
    int  _verticalSensorBinningFactor;
    NSMutableDictionary * _videoCaptureInputsByPortType;
    NSMutableDictionary * _videoCaptureOutputsByPortType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *videoCaptureInputsByPortType;
@property (nonatomic, readonly) NSDictionary *videoCaptureOutputsByPortType;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didChangeCenterStageFramingMode:(int)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 cameraInfoByPortType:(id)arg2 horizontalSensorBinningFactor:(int)arg3 verticalSensorBinningFactor:(int)arg4 deviceOrientationCorrectionEnabled:(bool)arg5 portTypes:(id)arg6 deviceModelName:(id)arg7 cameraHasDistortionCoefficients:(bool)arg8 cameraHasCalibrationValidMaxRadius:(bool)arg9 centerStageFramingMode:(int)arg10 gazeSelectionEnabled:(bool)arg11;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoCaptureInputsByPortType;
- (id)videoCaptureOutputsByPortType;

@end
