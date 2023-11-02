
@interface JEMediaActivity : NSObject {
    void pipelineHandler;
    void playlistItem;
    void type;
}

@property (nonatomic, readonly) bool isStopped;
@property (nonatomic, retain) <JEMediaPlaylistItem> *playlistItem;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)eventDataForTransitioningEvents;
- (id)init;
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 pipeline:(id)arg3 topic:(id)arg4;
- (bool)isStopped;
- (id)playlistItem;
- (unsigned long long)positionWithOverallPosition:(unsigned long long)arg1;
- (void)postProcessedStartMetricsFieldsWithCompletion:(id /* block */)arg1;
- (void)postProcessedStopMetricsFieldsWithCompletion:(id /* block */)arg1;
- (void)setPlaylistItem:(id)arg1;
- (void)setType:(long long)arg1;
- (id)startMetricsFields;
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5;
- (id)stopMetricsFields;
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 transitioningEventData:(id)arg5;
- (long long)type;

@end
