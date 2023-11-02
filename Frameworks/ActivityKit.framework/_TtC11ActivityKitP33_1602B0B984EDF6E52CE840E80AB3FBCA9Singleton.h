
@interface _TtC11ActivityKitP33_1602B0B984EDF6E52CE840E80AB3FBCA9Singleton : NSObject <ACActivityOutputXPCClient> {
    void _activityPublisher;
    void _queue_activities;
    void _queue_subscriptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _queue_target;
    void activityDiffPublisher;
    void calloutQueue;
    void queue;
    void serverStartupToken;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)activitiesChanged:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
