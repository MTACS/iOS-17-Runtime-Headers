
@interface CMMotionManagerInternal : NSObject {
    NSOperationQueue * _fDeviceMotionLiteClientQueue;
    id /* block */  _fDeviceMotionLiteFusedHandler;
    NSString * _fDeviceMotionLitePhysicalDeviceID;
    struct Dispatcher { int (**x1)(); id x2; } * fAccelerometerDispatcher;
    id /* block */  fAccelerometerHandler;
    NSOperationQueue * fAccelerometerQueue;
    double  fAccelerometerUpdateInterval;
    struct Dispatcher { int (**x1)(); id x2; } * fAmbientPressureDispatcher;
    id /* block */  fAmbientPressureHandler;
    NSOperationQueue * fAmbientPressureQueue;
    double  fAmbientPressureUpdateInterval;
    unsigned long long  fAttitudeReferenceFrame;
    bool  fCompassCalibrationHud;
    struct Dispatcher { int (**x1)(); id x2; } * fCompensatedAmbientPressureDispatcher;
    id /* block */  fCompensatedAmbientPressureHandler;
    NSOperationQueue * fCompensatedAmbientPressureQueue;
    double  fCompensatedAmbientPressureUpdateInterval;
    void * fConnection;
    NSObject<OS_dispatch_queue> * fConnectionQueue;
    struct Dispatcher { int (**x1)(); id x2; } * fDeviceMotionDispatcher;
    id /* block */  fDeviceMotionErrorHandler;
    NSOperationQueue * fDeviceMotionErrorQueue;
    id /* block */  fDeviceMotionHandler;
    struct unique_ptr<CLDeviceMotionLiteService, std::default_delete<CLDeviceMotionLiteService>> { 
        struct __compressed_pair<CLDeviceMotionLiteService *, std::default_delete<CLDeviceMotionLiteService>> { 
            struct CLDeviceMotionLiteService {} *__value_; 
        } __ptr_; 
    }  fDeviceMotionLiteService;
    int  fDeviceMotionMode;
    NSOperationQueue * fDeviceMotionQueue;
    double  fDeviceMotionStartTimestamp;
    double  fDeviceMotionUpdateInterval;
    struct Dispatcher { int (**x1)(); id x2; } * fFactoryGyroDispatcher;
    bool  fFactoryGyroFitComputed;
    id /* block */  fFactoryGyroHandler;
    struct LinearFit { 
        float fSlope[3]; 
        float fIntercept[3]; 
    }  fFactoryGyroLinearGyroBiasFit;
    struct NonlinearGyroBiasFit { 
        unsigned char fType; 
        unsigned char fPadding[3]; 
        struct LinearFit { 
            float fSlope[3]; 
            float fIntercept[3]; 
        } fFits[8]; 
        float fTemperatures[7]; 
        float fOverlap; 
        unsigned char fError[3][18]; 
    }  fFactoryGyroNonlinearGyroBiasFit;
    NSOperationQueue * fFactoryGyroQueue;
    struct Dispatcher { int (**x1)(); id x2; } * fFactoryGyroTemperatureDispatcher;
    double  fFactoryGyroTemperatureUpdateInterval;
    double  fFactoryGyroUpdateInterval;
    struct Dispatcher { int (**x1)(); id x2; } * fGyroDispatcher;
    id /* block */  fGyroHandler;
    NSOperationQueue * fGyroQueue;
    double  fGyroUpdateInterval;
    bool  fHaveSentDeviceRequiresMovementError;
    bool  fHaveSentTrueNorthUnavailableError;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  fInitialReferenceRotation;
    bool  fIsApplicationActive;
    bool  fIsCompassCalibrated;
    bool  fIsInitialReferenceAvailable;
    bool  fIsUsingCalibratedCompass;
    struct Dispatcher { int (**x1)(); id x2; } * fKeyboardMotionDMDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * fKeyboardMotionDispatcher;
    float  fKeyboardMotionGravityDeltaThreshold;
    struct CMVector<float, 3UL> { 
        float elements[3]; 
    }  fKeyboardMotionGravityHIDReportPrev;
    float  fKeyboardMotionGravityNotificationFrequency;
    id /* block */  fKeyboardMotionHandler;
    NSOperationQueue * fKeyboardMotionQueue;
    double  fKeyboardMotionTimestampGravityHidReportPrev;
    double  fLastAccelerometerNotificationTimestamp;
    double  fLastAmbientPressureNotificationTimestamp;
    double  fLastCompensatedAmbientPressureNotificationTimestamp;
    double  fLastDeviceMotionNotificationTimestamp;
    double  fLastFactoryGyroNotificationTimestamp;
    float  fLastFactoryGyroTemperature;
    double  fLastGyroNotificationTimestamp;
    double  fLastMagnetometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    }  fLatestAccelerometerSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestCompensatedAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        unsigned short sampleNum; 
        bool fsync; 
    }  fLatestGyroSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
        float temperature; 
    }  fLatestMagnetometerSample;
    struct Dispatcher { int (**x1)(); id x2; } * fMagnetometerDispatcher;
    id /* block */  fMagnetometerHandler;
    NSOperationQueue * fMagnetometerQueue;
    double  fMagnetometerUpdateInterval;
    struct unique_ptr<CMMotionManagerStatsCollector, std::default_delete<CMMotionManagerStatsCollector>> { 
        struct __compressed_pair<CMMotionManagerStatsCollector *, std::default_delete<CMMotionManagerStatsCollector>> { 
            struct CMMotionManagerStatsCollector {} *__value_; 
        } __ptr_; 
    }  fMotionManagerStatsCollector;
    int (* fPrivateAccelerometerDataCallback;
    void * fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } * fPrivateAccelerometerDataDispatcher;
    int (* fPrivateDeviceMotionCallback;
    void * fPrivateDeviceMotionCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionSensorStatusDispatcher;
    bool  fPrivateDeviceMotionUse9Axis;
    int (* fPrivateGyroDataCallback;
    void * fPrivateGyroDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } * fPrivateGyroDataDispatcher;
    int (* fPrivateMagnetometerDataCallback;
    void * fPrivateMagnetometerDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } * fPrivateMagnetometerDataDispatcher;
    int (* fPrivateNotificationCallback;
    void * fPrivateNotificationCallbackInfo;
    int  fPrivatePowerConservationMode;
    bool  fPrivateUseAccelerometer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
    bool  fShowsDeviceMovementDisplay;
    bool  fSidebandSensorFusionEnabled;
    bool  fSidebandSensorFusionLatency;
    bool  fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::default_delete<CLIspDataVisitor>> { 
        struct __compressed_pair<CLIspDataVisitor *, std::default_delete<CLIspDataVisitor>> { 
            struct CLIspDataVisitor {} *__value_; 
        } __ptr_; 
    }  fSidebandVisitor;
}

@property (nonatomic, retain) NSOperationQueue *fDeviceMotionLiteClientQueue;
@property (nonatomic, copy) id /* block */ fDeviceMotionLiteFusedHandler;
@property (nonatomic, retain) NSString *fDeviceMotionLitePhysicalDeviceID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fDeviceMotionLiteClientQueue;
- (id /* block */)fDeviceMotionLiteFusedHandler;
- (id)fDeviceMotionLitePhysicalDeviceID;
- (id)init;
- (void)setFDeviceMotionLiteClientQueue:(id)arg1;
- (void)setFDeviceMotionLiteFusedHandler:(id /* block */)arg1;
- (void)setFDeviceMotionLitePhysicalDeviceID:(id)arg1;
- (void)teardownPrivate;

@end
