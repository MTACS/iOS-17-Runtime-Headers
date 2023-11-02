
@protocol TITypingSessionAggregatedEventObserver <NSObject>

@required

- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional

- (void)tearDown;

@end
