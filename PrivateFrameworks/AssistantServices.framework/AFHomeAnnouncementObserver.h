
@interface AFHomeAnnouncementObserver : NSObject <AFInvalidating, AFNotifyObserverDelegate, ANLocalPlaybackSessionDelegate> {
    long long  _groupingDepth;
    AFInstanceContext * _instanceContext;
    AFHomeAnnouncement * _lastPlayedAnnouncement;
    NSHashTable * _listeners;
    ANLocalPlaybackSession * _localPlaybackSession;
    AFNotifyObserver * _notifyObserver;
    NSObject<OS_dispatch_queue> * _queue;
    AFHomeAnnouncementSnapshot * _snapshot;
    NSObject<OS_dispatch_group> * _snapshotGroup;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginGrouping;
- (void)_endGrouping;
- (void)_enumerateListenersUsingBlock:(id /* block */)arg1;
- (void)_fetchStateAndLastPlayedAnnouncementForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleNotifyStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_invalidateLocalPlaybackSession;
- (id)_localPlaybackSession:(bool)arg1;
- (void)_setUp;
- (void)_tearDown;
- (void)_updateLastPlayedAnnouncement:(id)arg1;
- (void)_updateSnapshot:(id)arg1;
- (void)_updateState:(unsigned long long)arg1;
- (void)addListener:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)getSnapshotWithCompletion:(id /* block */)arg1;
- (void)getStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (void)invalidate;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)removeListener:(id)arg1;

@end
