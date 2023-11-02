
@protocol SKAPresenceClientConnectionLifecycleDelegate

@required

- (void)presenceClientConnectionWasInterrupted:(SKAPresenceClientConnection *)arg1;
- (void)presenceClientConnectionWasInvalidated:(SKAPresenceClientConnection *)arg1;

@end
