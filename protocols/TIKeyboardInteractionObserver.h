
@protocol TIKeyboardInteractionObserver <TIKeyboardInteractionProtocol>

@required

- (void)endSessionWithTimestamp:(NSDate *)arg1;
- (void)startSessionWithTimestamp:(NSDate *)arg1;

@optional

- (void)analyzeSessionWithSessionParams:(TITypingSessionParams *)arg1;

@end
