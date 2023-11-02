
@protocol SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate

@required

- (void)subscriptionServiceClientConnectionWasInterrupted:(SKAStatusSubscriptionServiceClientConnection *)arg1;
- (void)subscriptionServiceClientConnectionWasInvalidated:(SKAStatusSubscriptionServiceClientConnection *)arg1;

@end
