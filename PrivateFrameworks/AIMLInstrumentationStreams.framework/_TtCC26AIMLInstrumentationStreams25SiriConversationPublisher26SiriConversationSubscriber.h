
@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject <BPSSubscriber> {
    void downstream;
    void graphBuilder;
    void lastReceivedTimestamp;
    void upstreamFinished;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
