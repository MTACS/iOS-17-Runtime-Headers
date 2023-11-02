
@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id /* block */  _sendEventHandler;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSendEventHandler:(id /* block */)arg1;
- (void)sendEvent:(id)arg1;

@end
