
@protocol SKAStatusPublishingServiceClientConnectionLifecycleDelegate

@required

- (void)publishingServiceClientConnectionWasInterrupted:(SKAStatusPublishingServiceClientConnection *)arg1;
- (void)publishingServiceClientConnectionWasInvalidated:(SKAStatusPublishingServiceClientConnection *)arg1;

@end
