
@interface HDSPSleepSessionManager : NSObject <HDSPDeviceUnlockObserver, HDSPSleepTrackerDelegate> {
    <HDSPSleepSessionManagerDelegate> * _delegate;
    HDSPDeviceUnlockMonitor * _deviceUnlockManager;
    <HDSPSleepSessionPersistence> * _persistence;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSleepSessionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPDeviceUnlockMonitor *deviceUnlockManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPSleepSessionPersistence> *persistence;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } sessionLock;
@property (readonly) Class superclass;

+ (id)_archivedSessionDirectory;
+ (id)_archivedSessionFile;

- (void).cxx_destruct;
- (bool)_hasUnprocessedSessions;
- (void)_locked_savePendingSessions;
- (id)_unprocessedSessions;
- (void)_waitForFirstUnlock;
- (void)_withLock:(id /* block */)arg1;
- (void)archiveSession:(id)arg1;
- (id)delegate;
- (void)deviceHasBeenUnlocked;
- (id)deviceUnlockManager;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 persistence:(id)arg2;
- (id)persistence;
- (void)removeSessionDataFile;
- (void)savePendingSessions;
- (id)saveSession:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })sessionLock;
- (void)setDelegate:(id)arg1;
- (void)sleepTracker:(id)arg1 didEndSession:(id)arg2 reason:(unsigned long long)arg3;
- (void)sleepTrackerDidStartSession:(id)arg1;
- (void)startSession;
- (void)stopSession;

@end
