
@interface RCPEventStreamRecorder : RCPEventStream {
    <RCPAnalyticsEventSender> * _analyticsEventSender;
    RCPRecorderConfig * _config;
    struct __IOHIDEvent { } * _startLocationEvent;
    unsigned long long  _startTimestamp;
    long long  _state;
}

@property (nonatomic, retain) <RCPAnalyticsEventSender> *analyticsEventSender;
@property (nonatomic, readonly) RCPRecorderConfig *config;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic) struct __IOHIDEvent { }*startLocationEvent;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) long long state;

+ (id)recorderWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_finalizePointerEvents;
- (id)analyticsEventSender;
- (id)config;
- (void)dealloc;
- (void)enqueueEvent:(id)arg1;
- (void)finalizeEvents;
- (bool)isRecording;
- (void)setAnalyticsEventSender:(id)arg1;
- (void)setStartLocationEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (struct __IOHIDEvent { }*)startLocationEvent;
- (void)startRecording;
- (unsigned long long)startTimestamp;
- (long long)state;
- (void)stopRecording;

@end
