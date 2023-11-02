
@interface _TtC28SiriPrivateLearningAnalyticsP33_1C28A16D52A6DDC29A328441443490A627ScanConversationsSubscriber : NSObject <BPSSubscriber> {
    void currentConversation;
    void downstream;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
