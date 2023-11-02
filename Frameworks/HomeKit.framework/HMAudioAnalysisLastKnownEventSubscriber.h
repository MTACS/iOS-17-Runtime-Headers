
@interface HMAudioAnalysisLastKnownEventSubscriber : NSObject <HMEEventConsumer> {
    _HMContext * _context;
    <HMAudioAnalysisLastKnownEventSubscriberDataSource> * _dataSource;
    <HMAudioAnalysisLastKnownEventSubscriberDelegate> * _delegate;
    <HMESubscriptionProviding> * _subscriptionProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) _HMContext *context;
@property (readonly, copy) <HMAudioAnalysisLastKnownEventSubscriberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMAudioAnalysisLastKnownEventSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeIdentifier;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_didReceiveEvent:(id)arg1;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)homeIdentifier;
- (id)initWithContext:(id)arg1 subscriptionProvider:(id)arg2 dataSource:(id)arg3 workQueue:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)subscribeLastKnownEventsForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (id)subscriptionProvider;
- (id)workQueue;

@end
