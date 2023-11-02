
@interface FigCaptureCalibrationMonitor : NSObject {
    FigCaptureAPSSphereInteractionCalibrationContext * _apsSphereInteractionCalibrationContext;
    FigCaptureAutoFocusCalibrationContext * _autoFocusCalibrationContext;
    FigCaptureAutoFocusPositionSensorCalibrationContext * _autoFocusPositionSensorCalibrationContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _calibrationLock;
    struct OpaqueFigSimpleMutex { } * _calibrationPipelineMutex;
    NSObject<OS_dispatch_queue> * _calibrationRunQueue;
    bool  _calibrationShouldAbort;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _coreMotionMagneticField;
    double  _coreMotionMagneticFieldMagnitude;
    int  _magneticFieldAccuracyAttemptCount;
    int  _magneticFieldAttempt;
    struct { 
        int attemptCount; 
        double threshold; 
    }  _magneticFieldMagnitudeTiers;
    FigCaptureSphereCalibrationContext * _sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext * _sphereEndStopCalibrationContext;
    NSMutableArray * _streamCalibrationInformation;
}

+ (void)initialize;
+ (void)initializeSharedInstanceWithCaptureSourceBackings:(id)arg1;
+ (id)sharedInstance;

- (id)apsSphereInteractionCalibrationData;
- (id)autoFocusCalibrationData;
- (id)autoFocusPositionSensorCalibrationData;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end
