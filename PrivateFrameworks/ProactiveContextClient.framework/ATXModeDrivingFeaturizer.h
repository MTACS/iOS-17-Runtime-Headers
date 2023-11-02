
@interface ATXModeDrivingFeaturizer : NSObject <ATXModeFeaturizer> {
    BMBiomeScheduler * _DNDWDScheduler;
    BPSSink * _DNDWDSink;
    <ATXModeFeaturizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginListeningForDNDWDEvents;
- (id)_fetchMostRecentDNDWDEvent;
- (void)_processNewDNDWDEvent:(id)arg1;
- (id)_provideFeaturesWithLastDNDWDEvent:(id)arg1;
- (void)beginListening;
- (id)delegate;
- (id)provideFeatures;
- (void)setDelegate:(id)arg1;
- (void)stopListening;

@end
