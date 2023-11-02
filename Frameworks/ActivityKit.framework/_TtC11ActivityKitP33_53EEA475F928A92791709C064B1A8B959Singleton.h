
@interface _TtC11ActivityKitP33_53EEA475F928A92791709C064B1A8B959Singleton : NSObject <ACActivityProminenceObservationXPCClient> {
    void _prominencePublisher;
    void _queue_predicates;
    void _queue_prominentActivityIdentifiers;
    void connection;
    void queue;
    void serverStartupToken;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)activityProminenceDidChange:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listenForActivityProminenceWithActivityIdentifier:(id)arg1 handler:(id /* block */)arg2;

@end
