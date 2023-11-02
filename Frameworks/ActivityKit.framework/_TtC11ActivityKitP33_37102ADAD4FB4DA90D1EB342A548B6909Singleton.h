
@interface _TtC11ActivityKitP33_37102ADAD4FB4DA90D1EB342A548B6909Singleton : NSObject <ACActivityPresentationObservationXPCClient> {
    void _presentationPublisher;
    void _queue_predicates;
    void _queue_presentations;
    void connection;
    void queue;
    void serverStartupToken;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)activityPresentationsDidChange:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listenForActivityPresentationWithActivityIdentifier:(id)arg1 presenterBundleIdentifier:(id)arg2 handler:(id /* block */)arg3;

@end
