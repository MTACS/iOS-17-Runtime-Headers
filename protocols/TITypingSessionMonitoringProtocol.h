
@protocol TITypingSessionMonitoringProtocol <TIKeyboardInteractionProtocol>

@required

- (TITypingSession *)currentTypingSession;
- (void)endSessionWithInteractionObservers:(NSArray *)arg1 sessionParams:(TITypingSessionParams *)arg2 timestamp:(NSDate *)arg3;
- (NSArray *)resetInteractionObserversForNextSession;
- (void)tearDown;

@end
