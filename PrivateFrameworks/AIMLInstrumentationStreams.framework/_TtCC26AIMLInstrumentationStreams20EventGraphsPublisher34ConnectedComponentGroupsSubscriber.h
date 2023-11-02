
@interface _TtCC26AIMLInstrumentationStreams20EventGraphsPublisher34ConnectedComponentGroupsSubscriber : NSObject <BPSSubscriber> {
    void dimExpiryTime;
    void downstream;
    void eventTypeBuilder;
    void graphBuilder;
    void graphSessionWindowLength;
    void latestRecievedTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void logicalClockBuilder;
    void upstreamFinished;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
