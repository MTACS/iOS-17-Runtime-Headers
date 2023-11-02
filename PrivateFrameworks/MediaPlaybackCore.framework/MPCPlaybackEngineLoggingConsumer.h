
@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    struct _MPCLoggingConsumerChartState { 
        long long command; 
        long long session; 
        long long container; 
        long long item; 
        long long asset; 
    }  _chartState;
    struct _MPCLoggingConsumerChartStatus { 
        bool userExpectsAudio; 
        long long timeControlStatus; 
    }  _chartStatus;
    MPCPlaybackEngineEvent * _lastTimeControlStatusEvent;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCPlaybackEngineEvent *lastTimeControlStatusEvent;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (bool)_logAccountEvent:(id)arg1 subscription:(id)arg2 cursor:(id)arg3;
- (id)_playbackBarWithElapsedTime:(double)arg1 duration:(double)arg2;
- (id)lastTimeControlStatusEvent;
- (void)setLastTimeControlStatusEvent:(id)arg1;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
