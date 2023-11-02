
@interface RMRelativeMotionManager : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
            double z; 
            double w; 
        } quaternion; 
        double timestamp; 
        long long error; 
        double consumedAuxTimestamp; 
        double receivedAuxTimestamp; 
        double machAbsTimestamp; 
    }  _audioListenerPoseBuffer;
    int  _audioListenerPoseBufferIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _audioListenerPoseBufferLock;
    long long  _audioListenerPoseErrorBuffer;
    RMAudioListenerPoseManager * _audioListenerPoseManager;
    NSDictionary * _audioListenerPoseOptions;
    int  _currentAudioListenerPoseBufferIndex;
    int  _currentDummyDataBufferIndex;
    NSUserDefaults * _defaults;
    RMDummyData * _dummyDataBuffer;
    int  _dummyDataBufferIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dummyDataBufferLock;
    RMDummyDataManager * _dummyDataManager;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldReceiveAudioListenerPose;
    bool  _shouldReceiveDummyData;
    bool  _verboseLatencyAnalysisLogging;
}

@property (nonatomic, retain) NSDictionary *audioListenerPoseOptions;

+ (bool)isAudioListenerPoseAvailable;

- (void).cxx_destruct;
- (id)audioListenerPoseOptions;
- (void)dealloc;
- (long long)getCurrentAudioListenerPose:(struct { double x1; double x2; double x3; double x4; }*)arg1 timestamp:(double*)arg2;
- (id)getCurrentAudioListenerPoseWithError:(long long*)arg1;
- (id)getCurrentDummyData;
- (id)initWithQueue:(id)arg1;
- (void)resetAudioListenerPoseTrackingForAllClients;
- (void)setAudioListenerPoseOptions:(id)arg1;
- (void)startReceivingAudioListenerPoseWithStatusCallback:(id /* block */)arg1;
- (void)startReceivingDummyData;
- (void)stopReceivingAudioListenerPose;
- (void)stopReceivingDummyData;

@end
