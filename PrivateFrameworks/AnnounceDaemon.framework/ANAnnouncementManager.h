
@interface ANAnnouncementManager : NSObject {
    <ANAnnouncementManagerDelegte> * _delegate;
    NSUUID * _endpointID;
    NSMutableDictionary * _homeAnnouncements;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _timers;
    bool  _timersSuspended;
}

@property (nonatomic, readonly) NSArray *allAnnouncementsSortedByReceipt;
@property (nonatomic) <ANAnnouncementManagerDelegte> *delegate;
@property (nonatomic, readonly) NSUUID *endpointID;
@property (nonatomic, readonly) NSMutableDictionary *homeAnnouncements;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSMutableDictionary *timers;
@property (nonatomic) bool timersSuspended;

+ (id)managerWithEndpointID:(id)arg1;

- (void).cxx_destruct;
- (bool)_addAnnouncement:(id)arg1 home:(id)arg2 groupID:(id)arg3;
- (void)_addAnnouncementToReceiveQueue:(id)arg1;
- (void)_cleanDirectory;
- (void)_handleExpiredTimer:(id)arg1 withID:(id)arg2;
- (void)_loadStoredAnnouncements;
- (void)_notifyDelegateAnnouncementsChangedForGroupID:(id)arg1;
- (void)_removeAnnouncementWithID:(id)arg1;
- (void)_removeAnnouncementsForGroupID:(id)arg1;
- (void)_removeAnnouncementsHittingStorageAgeLimit;
- (void)_resetTimer:(id)arg1;
- (bool)_shouldAccept:(id)arg1 accept:(id /* block */)arg2;
- (void)_startTimer:(id)arg1;
- (void)_startTimerWithID:(id)arg1;
- (void)_suspendTimer:(id)arg1;
- (bool)_updateAnnouncement:(id)arg1 withContentsOfAnnouncement:(id)arg2 home:(id)arg3 groupID:(id)arg4;
- (void)addAnnouncement:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)allAnnouncementsSortedByReceipt;
- (id)announcementForID:(id)arg1;
- (id)announcementsForGroupID:(id)arg1;
- (id)announcementsForIDs:(id)arg1;
- (void)cleanForExit;
- (id)delegate;
- (id)endpointID;
- (id)homeAnnouncements;
- (id)initWithEndpointID:(id)arg1;
- (id)log;
- (void)pauseAllTimers;
- (void)removeAllAnnouncements;
- (void)removeOldAnnouncements;
- (void)resetAllTimers;
- (void)resumeAllTimers;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (void)setTimersSuspended:(bool)arg1;
- (id)timers;
- (bool)timersSuspended;
- (void)updateAnnouncement:(id)arg1 statusFlags:(unsigned long long)arg2;

@end
