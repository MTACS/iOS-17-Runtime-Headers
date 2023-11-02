
@interface MXSessionManagerSidekick : NSObject {
    NSMapTable * _coreSessionIDToMXSessionList;
    NSRecursiveLock * _recursiveLock;
    NSMapTable * _remoteDeviceIDToCoreSessionIDList;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSPointerArray * mCoreSessionList;
}

@property (nonatomic, readonly) NSMapTable *coreSessionIDToMXSessionList;
@property (nonatomic, readonly) NSRecursiveLock *recursiveLock;
@property (nonatomic, readonly) NSMapTable *remoteDeviceIDToCoreSessionIDList;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)copyMXCoreSessionForAudioSessionID:(unsigned int)arg1;
- (id)copyMXSessionList:(id)arg1;
- (id)coreSessionIDToMXSessionList;
- (void)dealloc;
- (void)dumpCoreSessionList;
- (void)dumpVersionNumbersFromSidekickSessionBehavioursPlist;
- (id)init;
- (bool)isSomeOtherSessionPlaying:(id)arg1;
- (int)postInterruptionEndedNotificationForAudioSessionID:(unsigned int)arg1 resumable:(bool)arg2;
- (void)postNotification:(id)arg1 toSession:(id)arg2 payload:(id)arg3;
- (id)recursiveLock;
- (void)registerMXCoreSessionSidekick:(id)arg1;
- (id)remoteDeviceIDToCoreSessionIDList;
- (id)serialQueue;
- (void)unregisterMXCoreSessionSidekick:(id)arg1;

@end
