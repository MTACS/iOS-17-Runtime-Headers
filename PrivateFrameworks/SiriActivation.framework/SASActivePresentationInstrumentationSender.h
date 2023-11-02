
@interface SASActivePresentationInstrumentationSender : SASActivationInstrumentationSender {
    long long  _aggregateRequestState;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedMesasges;
}

@property (nonatomic) long long aggregateRequestState;
@property (nonatomic, retain) NSMutableArray *queuedMesasges;

- (void).cxx_destruct;
- (bool)_canInstrumentForRequestState:(long long)arg1;
- (void)_instrumentActivationMessage:(id)arg1;
- (void)_requestStateDidChange:(long long)arg1;
- (void)aggregatePresentationRequestStateDidChange:(long long)arg1;
- (long long)aggregateRequestState;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (id)initWithAnalyticsStream:(id)arg1;
- (void)instrumentActivationMessage:(id)arg1;
- (id)queuedMesasges;
- (void)setAggregateRequestState:(long long)arg1;
- (void)setQueuedMesasges:(id)arg1;

@end
