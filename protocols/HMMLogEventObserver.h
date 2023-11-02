
@protocol HMMLogEventObserver <NSObject>

@required

- (void)didReceiveEventFromDispatcher:(HMMLogEvent *)arg1;

@end
