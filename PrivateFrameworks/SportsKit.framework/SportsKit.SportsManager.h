
@interface SportsKit.SportsManager : NSObject {
    void _activitiesPublisher;
    void _clockSyncedPlaysPublisher;
    void _subscriptionPublisher;
    void activeSubscriptions;
    void activitiesMonitor;
    void appState;
    void dataStore;
    void delegate;
    void disposables;
    void playsStore;
    void xpcConnectionProvider;
}

@property (nonatomic) <_TtP9SportsKit21SportsManagerDelegate_> *delegate;

- (void).cxx_destruct;
- (long long)activitiesCount;
- (id)delegate;
- (void)getEventForCanonicalId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
