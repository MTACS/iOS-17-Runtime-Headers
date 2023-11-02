
@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFInvalidating, AFUserNotificationAnnouncementSpeakingStateServiceDelegate> {
    NSXPCConnection * _connection;
    <AFUserNotificationAnnouncementSpeakingStateDelegate> * _delegate;
    NSMutableSet * _observingNotifications;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (id)_connection;
- (id)_currentConnection;
- (void)_notifyObserverOfFailureForAllObservingNotifications;
- (void)_removeObserverForNotificationRequestIdentifier:(id)arg1;
- (void)_speakingStateDidChange:(long long)arg1 forIdentifiers:(id)arg2;
- (void)_startObservingNotificationWithRequestIdentifier:(id)arg1;
- (void)_tearDown;
- (void)cleanUpConnection;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)speakingStateDidChange:(long long)arg1 forIdentifiers:(id)arg2;
- (void)startObservingNotificationWithRequestIdentifier:(id)arg1;
- (void)stopObservingNotificationWithRequestIdentifier:(id)arg1;

@end
