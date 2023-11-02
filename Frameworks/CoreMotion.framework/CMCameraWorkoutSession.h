
@interface CMCameraWorkoutSession : NSObject {
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _accelCount;
    struct Dispatcher { int (**x1)(); id x2; } * _accelerometerDispatcher;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _airpodsDmCount;
    CMAudioAccessoryManager * _audioAccessoryManager;
    struct Dispatcher { int (**x1)(); id x2; } * _deviceMotionDispatcher;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _dmCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _facePoseCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _fitnessMachineSampleCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _gyroCount;
    struct Dispatcher { int (**x1)(); id x2; } * _gyroDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * _gyroTemperatureDispatcher;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _heartRateReferenceCount;
    bool  _logAccel;
    bool  _logAirpodsDM;
    NSObject<OS_dispatch_source> * _logCountersTimer;
    bool  _logDM;
    bool  _logGyro;
    struct unique_ptr<CMCameraWorkoutLogger, std::default_delete<CMCameraWorkoutLogger>> { 
        struct __compressed_pair<CMCameraWorkoutLogger *, std::default_delete<CMCameraWorkoutLogger>> { 
            struct CMCameraWorkoutLogger {} *__value_; 
        } __ptr_; 
    }  _logger;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _skeletonCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _watchActiveCalorieCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _watchBasalCalorieCount;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _watchHeartRateCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_feed2DSkeleton:(id)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)_feed3DLiftedSkeleton:(id)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)_feed3DRetargetedSkeleton:(id)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)_feedAccel:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)_feedAccessoryConfig:(const void*)arg1;
- (void)_feedAccessoryInEarStatus:(int)arg1;
- (void)_feedDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; float x_2_1_9; bool x_2_1_10; bool x_2_1_11; int x_2_1_12; } x2; struct { float x_3_1_1; } x3; bool x4; unsigned int x5; unsigned char x6; struct Status { unsigned short x_7_1_1; } x7; float x8; }*)arg1;
- (void)_feedGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned short x3; bool x4; }*)arg1;
- (void)_feedGyroTemperature:(const struct Temperature { double x1; float x2; }*)arg1;
- (void)_feedHeadAccessoryDeviceMotion:(id)arg1;
- (void)dealloc;
- (void)feedBodyMetrics:(id)arg1;
- (void)feedFacePose:(id)arg1;
- (void)feedFitnessMachineSample:(id)arg1;
- (void)feedHeartRateReference:(unsigned short)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)feedSkeleton:(id)arg1;
- (void)feedWatchActiveCalories:(float)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)feedWatchBasalCalories:(float)arg1 localMachtime:(double)arg2 globalMachtime:(double)arg3;
- (void)feedWatchHeartRate:(float)arg1 confidence:(float)arg2 localMachtime:(double)arg3 globalMachtime:(double)arg4;
- (void)feedWorkoutEvent:(id)arg1;
- (void)flushMsl;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)logCounters;
- (void)start;
- (id)stats;
- (void)stop;

@end
