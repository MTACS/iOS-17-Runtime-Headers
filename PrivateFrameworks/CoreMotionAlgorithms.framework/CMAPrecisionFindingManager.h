
@interface CMAPrecisionFindingManager : NSObject {
    struct CMPrecisionFinderDownsampler { 
        int (**_vptr$CMDownsampler)(); 
        unsigned long long fMinimumToleratedDt; 
        unsigned long long fLastTimestamp; 
    }  _analyticsDownsampler;
    CMAPrecisionFindingAnalytics * _analyticsManager;
    <CMAPrecisionFindingDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _deviceFindingClient;
    struct CMPrecisionFinderDownsampler { 
        int (**_vptr$CMDownsampler)(); 
        unsigned long long fMinimumToleratedDt; 
        unsigned long long fLastTimestamp; 
    }  _deviceMotionDownsampler;
    struct CMPrecisionFinderDownsampler { 
        int (**_vptr$CMDownsampler)(); 
        unsigned long long fMinimumToleratedDt; 
        unsigned long long fLastTimestamp; 
    }  _positionDownsampler;
    struct CMPrecisionFindingPositionEstimator { 
        struct CMAPositionType { 
            double timestamp; 
            float distance; 
            float horizontalAngle; 
            float horizontalAngleAccuracy; 
            bool isConverged; 
            int revokeReason; 
            bool isDistanceValid; 
        } fPosition; 
        struct CMFindingParticleFilterState { 
            double timestamp; 
            float horizontalAngleAccuracyUnfiltered; 
            struct array<float, 4UL> { 
                float __elems_[4]; 
            } stateEstimate; 
        } fParticleFilterState; 
        struct CMPrecisionFindingVelocityEstimator { 
            struct CMDownsampler<double> { 
                int (**_vptr$CMDownsampler)(); 
                double fMinimumToleratedDt; 
                double fLastTimestamp; 
            } fDownsampler; 
            struct CMVector<float, 2UL> { 
                float elements[2]; 
            } fPlanarVelocity; 
            struct CMVector<float, 2UL> { 
                float elements[2]; 
            } fNoise; 
            struct CMAOPFFTSensorBuffers { 
                struct Buffers { 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialRotationRateX; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialRotationRateY; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialRotationRateZ; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userRotationRateX; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userRotationRateY; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userRotationRateZ; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialAccelX; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialAccelY; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } inertialAccelZ; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userAccelX; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userAccelY; 
                    struct CMFixedSizeRunningBuffer<float, 256UL> { 
                        bool fIsStaleStatistics; 
                        float fMean; 
                        float fVariance; 
                        float fNorm; 
                        struct CMQueue<float> { 
                            struct { 
                                unsigned short fHead; 
                                unsigned short fSize; 
                            } fHeadAndSize; 
                            unsigned int fCapacity; 
                            BOOL fBuffer[4]; 
                        } fSamples; 
                        struct CMQueueStorage<float, 256UL> { 
                            BOOL buffer[1020]; 
                        } fStorage; 
                    } userAccelZ; 
                    struct CMFixedSizeQueue<CMOQuaternion, 256UL> { 
                        struct { 
                            unsigned short fHead; 
                            unsigned short fSize; 
                        } fHeadAndSize; 
                        unsigned int fCapacity; 
                        BOOL fBuffer[16]; 
                        struct CMQueueStorage<CMOQuaternion, 256UL> { 
                            BOOL buffer[4080]; 
                        } fStorage; 
                    } attitude; 
                    unsigned long long fTimestamp; 
                    struct CMFixedSizeQueue<unsigned short, 127UL> { 
                        struct { 
                            unsigned short fHead; 
                            unsigned short fSize; 
                        } fHeadAndSize; 
                        unsigned int fCapacity; 
                        BOOL fBuffer[2]; 
                        struct CMQueueStorage<unsigned short, 127UL> { 
                            BOOL buffer[252]; 
                        } fStorage; 
                    } timestampDelta; 
                } fBuffers; 
                unsigned long long fCountDeviceMotionForPDRFeatures; 
                unsigned long long fCountDeviceMotionForPDRFeaturesFast; 
                struct TNB { 
                    struct CMVector<float, 3UL> { 
                        float elements[3]; 
                    } userAccelInerLPF; 
                    struct CMVector<float, 3UL> { 
                        float elements[3]; 
                    } userAccelInerLPFPrev; 
                    struct CMVector<float, 3UL> { 
                        float elements[3]; 
                    } tangent; 
                    struct CMVector<float, 3UL> { 
                        float elements[3]; 
                    } binormal; 
                    bool isValid; 
                    struct CMVector<float, 2UL> { 
                        float elements[2]; 
                    } dotVector; 
                    struct CMVector<float, 2UL> { 
                        float elements[2]; 
                    } dotVectorFiltered; 
                    struct CLButterworthFilter<float, 2UL> { 
                        unsigned long long fPrimed; 
                        unsigned long long fOffset; 
                        float fData[5]; 
                        float fCoefficients[9]; 
                    } dotFilter[2]; 
                } fTNB; 
            } fSensorBuffers; 
            struct CMPDRSpeedEstimator { 
                float fSpeed; 
                float fSpeedUnc; 
            } fSpeedEstimator; 
            struct CMAPrecisionFindingDOTEstimator { 
                struct CMVector<float, 3UL> { 
                    float elements[3]; 
                } fBodyYAxis; 
                bool fIsWristCrownInitialized; 
                struct CMAWatchOrientationStruct { 
                    double timestamp; 
                    int wrist; 
                    int crown; 
                } fWristCrownConfig; 
            } fDOTEstimator; 
            bool fIsDOTAvailable; 
        } fVelocityEstimator; 
        struct CMFindingParticleFilter { 
            struct RangeMeasurement { 
                float range; 
                float rangeShift; 
            } fRangeMeasurement; 
            struct VelocityEstimation { 
                struct CMVector<float, 2UL> { 
                    float elements[2]; 
                } velocity; 
                struct CMVector<float, 2UL> { 
                    float elements[2]; 
                } noise; 
            } fVelocityMeasurement; 
            float fSpeedMeasurenment; 
            struct CMParticleFilter<4UL> { 
                struct vector<std::array<float, 4>, std::allocator<std::array<float, 4>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::array<float, 4> *, std::allocator<std::array<float, 4>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } fParticles; 
                struct vector<float, std::allocator<float>> { 
                    float *__begin_; 
                    float *__end_; 
                    struct __compressed_pair<float *, std::allocator<float>> { 
                        float *__value_; 
                    } __end_cap_; 
                } fWeights; 
                unsigned long long fNumParticles; 
            } fParticleFilter; 
            void *fParticles; 
            void *fWeights; 
            unsigned long long fNumParticles; 
            bool fWasMeasurementApplied; 
            struct array<float, 4UL> { 
                float __elems_[4]; 
            } fCurrentState; 
            float fAngularDeviation; 
            double fTimestamp; 
            struct CMVector<float, 2UL> { 
                float elements[2]; 
            } fCurrentAccel; 
            struct CMVector<float, 2UL> { 
                float elements[2]; 
            } fBatchedDv; 
            float fBatchedDt; 
            unsigned long long fMeasurementCount; 
            float fEstimatedRangeFromParticles; 
        } fParticleFilter; 
        bool fFirstSampleAccepted; 
        bool fFirstArcShown; 
        struct CMFixedSizeRunningBuffer<float, 10UL> { 
            bool fIsStaleStatistics; 
            float fMean; 
            float fVariance; 
            float fNorm; 
            struct CMQueue<float> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
            } fSamples; 
            struct CMQueueStorage<float, 10UL> { 
                BOOL buffer[36]; 
            } fStorage; 
        } fRangeBuffer; 
        struct CMFixedSizeRunningBuffer<double, 10UL> { 
            bool fIsStaleStatistics; 
            double fMean; 
            double fVariance; 
            double fNorm; 
            struct CMQueue<double> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[8]; 
            } fSamples; 
            struct CMQueueStorage<double, 10UL> { 
                BOOL buffer[72]; 
            } fStorage; 
        } fRangeTimeBuffer; 
        struct CMFixedSizeRunningBuffer<bool, 10UL> { 
            bool fIsStaleStatistics; 
            bool fMean; 
            bool fVariance; 
            bool fNorm; 
            struct CMQueue<bool> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[1]; 
            } fSamples; 
            struct CMQueueStorage<bool, 10UL> { 
                BOOL buffer[9]; 
            } fStorage; 
        } fRangeIsValidBuffer; 
        struct CMFixedSizeRunningBuffer<unsigned int, 4UL> { 
            bool fIsStaleStatistics; 
            unsigned int fMean; 
            unsigned int fVariance; 
            unsigned int fNorm; 
            struct CMQueue<unsigned int> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
            } fSamples; 
            struct CMQueueStorage<unsigned int, 4UL> { 
                BOOL buffer[12]; 
            } fStorage; 
        } fActivityBuffer; 
        struct CMFixedSizeRunningBuffer<unsigned int, 4UL> { 
            bool fIsStaleStatistics; 
            unsigned int fMean; 
            unsigned int fVariance; 
            unsigned int fNorm; 
            struct CMQueue<unsigned int> { 
                struct { 
                    unsigned short fHead; 
                    unsigned short fSize; 
                } fHeadAndSize; 
                unsigned int fCapacity; 
                BOOL fBuffer[4]; 
            } fSamples; 
            struct CMQueueStorage<unsigned int, 4UL> { 
                BOOL buffer[12]; 
            } fStorage; 
        } fActivityTimeBuffer; 
        struct CMAWatchOrientationStruct { 
            double timestamp; 
            int wrist; 
            int crown; 
        } fWristCrownConfig; 
        bool fWasPhoneMoving; 
        bool fIsWristCrownInitialized; 
        bool fIsFilterInitialized; 
        unsigned long long fNumParticles; 
        struct FirstOrderFilter<float> { 
            int fNumSamples; 
            float fAlpha; 
            float fFiltered; 
        } fAngleUncertaintyFilter; 
        struct FirstOrderFilter<float> { 
            int fNumSamples; 
            float fAlpha; 
            float fFiltered; 
        } fFirstOrderRangeFilter; 
        bool fSustainedLowRangeObserved; 
        unsigned int fLowRangeCount; 
        float fPreviousRange; 
        double fPreviousRangeTimeStamp; 
        double fLowAccuracyTimeStamp; 
        float fRangeWhenArcRevokedDueToHighUncertainty; 
        double fPreviousVelocityTimeStamp; 
        struct optional<CMARangeType> { 
            union { 
                BOOL __null_state_; 
                struct CMARangeType { 
                    double timestamp; 
                    double range; 
                    double rangeError; 
                    double rssi; 
                    unsigned short cycleIndex; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } fAcceptedRange; 
    }  _positionEstimator;
}

@property (nonatomic, retain) CMAPrecisionFindingAnalytics *analyticsManager;
@property (nonatomic) <CMAPrecisionFindingDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) bool deviceFindingClient;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analyticsManager;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)deviceFindingClient;
- (id)initWithDelegate:(id)arg1 dispatchQueue:(id)arg2;
- (void)setAnalyticsManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDeviceFindingClient:(bool)arg1;
- (void)startDeviceFindingUpdates;
- (void)stopDeviceFindingUpdates;
- (void)updateAltimeterData:(id)arg1;
- (void)updateAnalytics;
- (void)updateDeviceMotion:(id)arg1;
- (void)updatePeerState:(id)arg1;
- (void)updateRanging:(id)arg1;
- (void)updateWatchOrientation:(id)arg1;

@end
