
@interface IDSMessageHashStore : NSObject {
    NSObject<OS_dispatch_source> * _databaseCloseTimer;
    double  _databaseLastUpdateTime;
    unsigned long long  _initialProcessTime;
    unsigned long long  _initialServerTime;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSMutableArray * _recentlySeenHashes;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *databaseCloseTimer;
@property (nonatomic) double databaseLastUpdateTime;
@property (nonatomic) unsigned long long initialProcessTime;
@property (nonatomic) unsigned long long initialServerTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ivarQueue;
@property (nonatomic, retain) NSMutableArray *recentlySeenHashes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_currentLocalTime;
- (void)_performInitialHousekeeping;
- (void)_runCleanup;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_startCleanupTimer;
- (void)addMessageHash:(id)arg1;
- (void)closeDatabase;
- (bool)containsMessageHash:(id)arg1;
- (id)databaseCloseTimer;
- (double)databaseLastUpdateTime;
- (id)init;
- (unsigned long long)initialProcessTime;
- (unsigned long long)initialServerTime;
- (id)ivarQueue;
- (id)recentlySeenHashes;
- (void)setDatabaseCloseTimer:(id)arg1;
- (void)setDatabaseLastUpdateTime:(double)arg1;
- (void)setInitialProcessTime:(unsigned long long)arg1;
- (void)setInitialServerTime:(unsigned long long)arg1;
- (void)setIvarQueue:(id)arg1;
- (void)setRecentlySeenHashes:(id)arg1;
- (void)updateCreationDateForHash:(id)arg1;

@end
