
@interface SessionCore.AssertionManager : _TtCs12_SwiftObject {
    void _lock_clients;
    void _lock_fakeForegroundSubscriptions;
    void _lock_presentationSubscriptions;
    void _lock_presenters;
    void _lock_prominenceSubscriptions;
    void _lock_prominentActivityIdentifiers;
    void _lock_qos;
    void _presentationPublisher;
    void _prominencePublisher;
    void _qosPublisher;
    void activityStore;
    void firstLaunchDetector;
    void lock;
    void queue;
    void store;
    void timer;
}

@end
