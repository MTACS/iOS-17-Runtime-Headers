
@interface AWScheduler : NSObject {
    bool  _allowFaceDetect;
    bool  _allowHIDEvents;
    bool  _allowMotionDetect;
    AWAttentionSampler * _attentionSampler;
    AWAttentionStreamer * _attentionStreamer;
    NSMutableArray * _clients;
    NSString * _identifier;
    NSMutableDictionary * _interruptedStreamingClients;
    <AWSchedulerObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _streamingClients;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
    NSObject<OS_dispatch_source> * _timer;
    bool  _unitTestMode;
    bool  _useAVFoundation;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool allowFaceDetect;
@property (nonatomic, readonly) bool allowHIDEvents;
@property (nonatomic, readonly) bool allowMotionDetect;
@property (nonatomic, readonly) AWAttentionSampler *attentionSampler;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) <AWSchedulerObserver> *observer;
@property (nonatomic, readonly) bool unitTestMode;

+ (id)sharedMotionDetectScheduler;
+ (id)sharedScheduler;
+ (id)sharedUnitTestScheduler;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (id)addStreamingClient:(id)arg1 withIdentifier:(int)arg2;
- (bool)allowFaceDetect;
- (bool)allowHIDEvents;
- (bool)allowMotionDetect;
- (void)armEvents;
- (id)attentionSampler;
- (double)calculateTimeDelta:(unsigned long long)arg1 endTime:(unsigned long long)arg2 timebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg3;
- (bool)canRunMotionDetect;
- (id)cancelFaceDetectStream:(id)arg1 withIdentifier:(id)arg2;
- (id)description;
- (void)handleNotification:(unsigned long long)arg1;
- (id)identifier;
- (id)initWithOptions:(id)arg1;
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)arg1;
- (id)observer;
- (void)processHIDEvent:(struct __IOHIDEvent { }*)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 senderID:(unsigned long long)arg4 displayUUID:(id)arg5;
- (void)reevaluate;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)arg1;
- (void)removeStreamingClientwithIdentifier:(int)arg1;
- (void)setClientAsInterrupted:(id)arg1 forKey:(id)arg2;
- (void)setObserver:(id)arg1;
- (void)setSmartCoverClosed:(bool)arg1;
- (bool)shouldActivateAttentionDetectForStreaming;
- (bool)shouldActivateAttentionDetectionForSampling;
- (bool)shouldActivateEyeReliefForStreaming;
- (bool)shouldActivateMotionDetectForSampling;
- (id)streamFaceDetectEvents;
- (id)streamFaceDetectEventsWithOptions:(struct { bool x1; bool x2; })arg1;
- (bool)unitTestMode;

@end
