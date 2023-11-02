
@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject <HMFTimerDelegate> {
    NSDate * _creationDate;
    HMFTimer * _delayTimer;
    HMDHomeManager * _homeManager;
    NSMutableDictionary * _homeToUserMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _managedMergeIDs;
    NSMutableArray * _userLastSyncs;
    bool  _valid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, readonly) bool valid;

+ (id)shortDescription;

- (void).cxx_destruct;
- (double)_expireInterval;
- (double)_interval;
- (double)_nextInterval;
- (void)_pushAllUserSyncData;
- (double)_pushInterval;
- (void)_removeAllUserLastSyncData;
- (void)_scheduleNextPush;
- (bool)_shouldExpire;
- (bool)_shouldPushNow;
- (void)configure;
- (id)description;
- (id)initWithHomeManager:(id)arg1 archivePaths:(id)arg2;
- (bool)isManagingUserWithMergeID:(id)arg1;
- (bool)isValid;
- (id)privateDescription;
- (void)removeUserLastSyncData:(id)arg1;
- (void)scheduleNextPush;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;

@end
