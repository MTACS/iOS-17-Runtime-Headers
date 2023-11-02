
@interface ATXModeScreenShareFeaturizer : NSObject <ATXModeFeaturizer> {
    <ATXModeFeaturizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processNewScreenShareEvent:(id)arg1;
- (id)_provideFeaturesWithScreenShareEvent:(id)arg1;
- (void)beginListening;
- (id)delegate;
- (id)provideFeatures;
- (void)setDelegate:(id)arg1;
- (void)stopListening;

@end
