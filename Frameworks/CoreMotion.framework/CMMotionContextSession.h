
@interface CMMotionContextSession : NSObject {
    struct CMAccessoryActivity { 
        struct ActivityPacket { 
            int state; 
            double stateTransitionTimestamp; 
            struct Impulse { 
                double start; 
                double end; 
            } stepImpulse; 
        } fActivityPacket; 
        bool fSitStandEnabled; 
        struct unique_ptr<CMSitStandDetector, std::default_delete<CMSitStandDetector>> { 
            struct __compressed_pair<CMSitStandDetector *, std::default_delete<CMSitStandDetector>> { 
                struct CMSitStandDetector {} *__value_; 
            } __ptr_; 
        } fSitStandDetector; 
        struct CMAccessoryStepDetector { 
            bool fDetectedSteps; 
            bool fCandidateDetected; 
            bool fNotifiedDetectedSteps; 
            bool fLookingForFirstStep; 
            struct CMFixedSizeQueue<CMAccessoryStepDetector::AggAccelSample, 50UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[24]; 
                struct CMQueueStorage<CMAccessoryStepDetector::AggAccelSample, 50UL> { 
                    BOOL buffer[1176]; 
                } fStorage; 
            } fInertialAggAccelBuffer; 
            struct CMFixedSizeQueue<CMAccessoryStepDetector::VectorSample, 50UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[24]; 
                struct CMQueueStorage<CMAccessoryStepDetector::VectorSample, 50UL> { 
                    BOOL buffer[1176]; 
                } fStorage; 
            } fInertialAccelBuffer; 
            struct CMFixedSizeQueue<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[24]; 
                struct CMQueueStorage<CMAccessoryStepDetector::FaceRotationRateSample, 50UL> { 
                    BOOL buffer[1176]; 
                } fStorage; 
            } fFaceRotationRateBuffer; 
            struct CMFixedSizeQueue<float, 150UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
                struct CMQueueStorage<float, 150UL> { 
                    BOOL buffer[596]; 
                } fStorage; 
            } fAuxRotationRateNormBuffer; 
            struct CMFixedSizeQueue<float, 50UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
                struct CMQueueStorage<float, 50UL> { 
                    BOOL buffer[196]; 
                } fStorage; 
            } fInertialAggForwardAccelBufferFaceFrame; 
            struct CMFixedSizeQueue<float, 50UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
                struct CMQueueStorage<float, 50UL> { 
                    BOOL buffer[196]; 
                } fStorage; 
            } fYawRotationRateBuffer; 
            struct CMFixedSizeQueue<double, 7UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[8]; 
                struct CMQueueStorage<double, 7UL> { 
                    BOOL buffer[48]; 
                } fStorage; 
            } fSpatialSampleTimestampBuffer; 
            struct CMFixedSizeQueue<CMVector<float, 3>, 7UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[12]; 
                struct CMQueueStorage<CMVector<float, 3>, 7UL> { 
                    BOOL buffer[72]; 
                } fStorage; 
            } fSpatialSampleAggAccelBuffer; 
            double fCurrentPointTimestamp; 
            struct CMVector<float, 3UL> { 
                float elements[3]; 
            } fCurrentPointAggAccel; 
            int fState; 
            int fPreviousState; 
            int fLastStateTransitionedFrom; 
            struct AggAccelSample { 
                double timestamp; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } aggAccel; 
            } fCurrentUpSample; 
            struct AggAccelSample { 
                double timestamp; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } aggAccel; 
            } fCurrentDownSample; 
            double fLastEndImpulseTimestamp; 
            struct CMFixedSizeQueue<double, 3UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[8]; 
                struct CMQueueStorage<double, 3UL> { 
                    BOOL buffer[16]; 
                } fStorage; 
            } fEndImpulseTimestampHistory; 
            struct CMFixedSizeQueue<double, 3UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[8]; 
                struct CMQueueStorage<double, 3UL> { 
                    BOOL buffer[16]; 
                } fStorage; 
            } fStartImpulseTimestampHistory; 
            struct CMOQuaternion { 
                float elements[4]; 
            } fHeadsetOrientation; 
            struct StepModel { 
                double timeSinceLastStepSecRatio[7]; 
                double impulseDurationSecRatio[7]; 
                double deltaInertialZVelRatio[7]; 
                double thetaRollFaceDegreesRatio[9]; 
                double thetaPitchFaceDegreesRatio[9]; 
                double horizontalDisplacementRatio[8]; 
                double peakinessRatio[2]; 
                double bobbinessRatio[2]; 
                double timeSinceLastStepSecEdge[7]; 
                double impulseDurationSecEdge[7]; 
                double deltaInertialZVelEdge[7]; 
                double thetaRollFaceDegreesEdge[9]; 
                double thetaPitchFaceDegreesEdge[9]; 
                double horizontalDisplacementEdge[8]; 
                double peakinessEdge[2]; 
                double bobbinessEdge[2]; 
                double *ratios[8]; 
                double *rightBinEdges[8]; 
            } fStepModel; 
            int (*fCallback)(); 
            void *fCallbackInfo; 
            double fLastNotifiedTimeSec; 
            struct CMSpatialLogger {} *fLogger; 
        } fAccessoryStepDetector; 
        struct Impulse { 
            double start; 
            double end; 
        } fCurrStepImpulse; 
        bool fHeadsetOrientationIsSet; 
    }  _accessoryActivity;
    struct Dispatcher { int (**x1)(); id x2; } * _accessoryDeviceMotionConfigDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * _accessoryDeviceMotionDispatcher;
    struct unique_ptr<CMMotionContextSessionAnalyticsTracker, std::default_delete<CMMotionContextSessionAnalyticsTracker>> { 
        struct __compressed_pair<CMMotionContextSessionAnalyticsTracker *, std::default_delete<CMMotionContextSessionAnalyticsTracker>> { 
            struct CMMotionContextSessionAnalyticsTracker {} *__value_; 
        } __ptr_; 
    }  _analyticsTracker;
    int  _auxSampleCounter;
    double  _currentTime;
    struct Dispatcher { int (**x1)(); id x2; } * _deviceMotionDispatcher;
    float  _distanceTravelledPerDVEvent;
    double  _distractedViewingEnterTime;
    bool  _drawPositionOnStart;
    bool  _enableMLModel;
    bool  _inDVEvent;
    float  _initialHeadingDegrees;
    struct CMVector<double, 2UL> { 
        double elements[2]; 
    }  _initialPosition;
    int  _lastTrackingDisableRoute;
    bool  _logMSL;
    struct unique_ptr<CMMotionContextLogger, std::default_delete<CMMotionContextLogger>> { 
        struct __compressed_pair<CMMotionContextLogger *, std::default_delete<CMMotionContextLogger>> { 
            struct CMMotionContextLogger {} *__value_; 
        } __ptr_; 
    }  _logger;
    id /* block */  _motionContextClientHandler;
    NSObject<OS_dispatch_queue> * _motionContextClientQueue;
    int  _motionContextState;
    struct CMPdr { 
        struct CMPdrInputs { 
            struct AccelTNBFrame { 
                double lastValidTNBTimestamp; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } lastSample; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } T; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } N; 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } B; 
                float jerkNorm; 
                float curvature; 
                float torsion; 
                bool isValid; 
            } fInertialAccelTNB; 
            double fLastTimestamp; 
            double fSampleDT; 
            struct Parameters { 
                double B[12]; 
                double A[12]; 
                double inputScaleValues[4]; 
                double outputScaleValues[4]; 
            } kSosFilterParams; 
            struct array<CMSosFilter<4>, 3UL> { 
                struct CMSosFilter<4UL> { 
                    struct Parameters {} *kParams; 
                    float fOutput; 
                    float fRegister[12]; 
                } __elems_[3]; 
            } fInertialUserAccelFilter; 
            struct array<CMSosFilter<4>, 3UL> { 
                struct CMSosFilter<4UL> { 
                    struct Parameters {} *kParams; 
                    float fOutput; 
                    float fRegister[12]; 
                } __elems_[3]; 
            } fInertialRotationRateFilter; 
        } fPdrInputs; 
        int fAlgType; 
        struct CMPdrDirectionality { 
            double _lastStartImpulseTimestamp; 
            double _lastEndImpulseTimestamp; 
            double _lastStepDirectionRadians; 
            struct CMVector<double, 2UL> { 
                double elements[2]; 
            } _lastPosition; 
            struct CMFixedSizeQueue<CMPdrDirectionality::AggAccelSample, 245UL> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[24]; 
                struct CMQueueStorage<CMPdrDirectionality::AggAccelSample, 245UL> { 
                    BOOL buffer[5856]; 
                } fStorage; 
            } _inertialBuffer; 
        } fDirectionalityDetector; 
        struct unique_ptr<CMPdrEstimatorOnHead, std::default_delete<CMPdrEstimatorOnHead>> { 
            struct __compressed_pair<CMPdrEstimatorOnHead *, std::default_delete<CMPdrEstimatorOnHead>> { 
                struct CMPdrEstimatorOnHead {} *__value_; 
            } __ptr_; 
        } fPdrEstimatorOnHead; 
        struct unique_ptr<CMPdrEstimatorOnBody, std::default_delete<CMPdrEstimatorOnBody>> { 
            struct __compressed_pair<CMPdrEstimatorOnBody *, std::default_delete<CMPdrEstimatorOnBody>> { 
                struct CMPdrEstimatorOnBody {} *__value_; 
            } __ptr_; 
        } fPdrEstimatorOnBody; 
        struct unique_ptr<CMDoTEstimatorHandSwing, std::default_delete<CMDoTEstimatorHandSwing>> { 
            struct __compressed_pair<CMDoTEstimatorHandSwing *, std::default_delete<CMDoTEstimatorHandSwing>> { 
                struct CMDoTEstimatorHandSwing {} *__value_; 
            } __ptr_; 
        } fPdrEstimatorHandSwing; 
        struct unique_ptr<CMDoTEstimatorInHandTexting, std::default_delete<CMDoTEstimatorInHandTexting>> { 
            struct __compressed_pair<CMDoTEstimatorInHandTexting *, std::default_delete<CMDoTEstimatorInHandTexting>> { 
                struct CMDoTEstimatorInHandTexting {} *__value_; 
            } __ptr_; 
        } fPdrEstimatorTexting; 
    }  _pdr;
    id /* block */  _pdrClientHandler;
    NSObject<OS_dispatch_queue> * _pdrClientQueue;
    struct CMVector<double, 2UL> { 
        double elements[2]; 
    }  _prevPDRPosition;
    struct PdrResults { 
        bool step; 
        double startImpulse; 
        double endImpulse; 
        struct CMVector<double, 2UL> { 
            double elements[2]; 
        } position; 
        int stepsCount; 
        float directionOfTravelDegrees; 
        double speedMps; 
        struct CMOQuaternion { 
            float elements[4]; 
        } attitude; 
    }  _result;
    id /* block */  _stepCountClientHandler;
    NSObject<OS_dispatch_queue> * _stepCountClientQueue;
    int  _stepCountPerDVEvent;
    float  _totalSessionTime;
    struct unique_ptr<CMPdrMLModel, std::default_delete<CMPdrMLModel>> { 
        struct __compressed_pair<CMPdrMLModel *, std::default_delete<CMPdrMLModel>> { 
            struct CMPdrMLModel {} *__value_; 
        } __ptr_; 
    }  hmlModel;
}

+ (bool)isAvailable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enableMLModel:(bool)arg1;
- (void)enterDistractedViewingSession:(int)arg1;
- (void)exitDistractedViewingSession:(int)arg1;
- (void)feedARKitWorldPoseWithTimestamp:(double)arg1 pose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 status:(int)arg3;
- (void)feedAccessoryConfig:(const void*)arg1;
- (void)feedAudioAccessoryIMU:(const void*)arg1;
- (void)feedGPSLocationWithTimestamp:(double)arg1 course:(double)arg2 speed:(double)arg3 latitude:(double)arg4 longitude:(double)arg5 horizontalAccuracy:(double)arg6;
- (void)feedSourceDeviceIMU:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; float x_2_1_9; bool x_2_1_10; bool x_2_1_11; int x_2_1_12; } x2; struct { float x_3_1_1; } x3; bool x4; unsigned int x5; unsigned char x6; struct Status { unsigned short x_7_1_1; } x7; float x8; }*)arg1;
- (id)init;
- (void)initLoggerWithPrefix:(id)arg1 filePath:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (void)notifyMotionContextClient:(int)arg1;
- (void)notifyPdrClient:(const void*)arg1;
- (void)notifyStepCountClient:(const void*)arg1;
- (void)setAlgType:(int)arg1;
- (void)setSpeedEstType:(int)arg1;
- (void)setTrackingClientMode:(int)arg1;
- (void)start;
- (void)startMotionContextUpdatesToQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)startPdrUpdatesToQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)startStepCountUpdatesToQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)stop;

@end
