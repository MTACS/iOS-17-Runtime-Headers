
@interface FLLogger : NSObject {
    NSObject<FLLoggingContext> * _context;
    NSMutableDictionary * _dbConnections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    NSDistributedNotificationCenter * _notificationCenter;
    unsigned long long  _persistentStoreCacheTTL;
    NSObject<OS_dispatch_source> * _persistentStoreCacheTTLTimer;
    NSMutableDictionary * _persistentStores;
    NSObject<OS_dispatch_source> * _transactionTTLTimer;
    NSObject<OS_os_transaction> * _writeTransaction;
    unsigned long long  _writeTransactionTTL;
}

@property (nonatomic, retain) NSObject<FLLoggingContext> *context;
@property (nonatomic, retain) NSMutableDictionary *dbConnections;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSDistributedNotificationCenter *notificationCenter;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (nonatomic, retain) NSMutableDictionary *persistentStores;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *transactionTTLTimer;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *writeTransaction;
@property (nonatomic) unsigned long long writeTransactionTTL;

+ (id)categoryForSiriPayload:(id)arg1;
+ (id)readSiriCategoryFrom:(id)arg1 recursive:(bool)arg2;
+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)__dispatched_databaseConnectionWithId:(id)arg1;
- (id)__dispatched_persistentStoreWithId:(id)arg1 category:(id)arg2;
- (void)_cancelStoreCacheTimer;
- (void)_cancelTransactionTTLTimer;
- (void)_cleanPersistantStores;
- (void)_closeAllStores;
- (id)_nextTimerFireDate;
- (void)_scheduleStoreCacheTimer;
- (void)_scheduleTransactionTTLTimer;
- (void)_setupStoreCacheTimer;
- (void)_setupTransactionTTLTimer;
- (void)_transactionTTLTimerDidFire;
- (void)cancelTransactionTTLTimer;
- (void)closeAllStores;
- (void)closeStoreForApplicationFromNotification:(id)arg1;
- (void)closeStoreForBundleID:(id)arg1;
- (id)context;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)arg1;
- (id)dbConnections;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (id)notificationCenter;
- (id)parsecCategoryForPayload:(id)arg1;
- (id)parsecPersistentStoreForBundleID:(id)arg1;
- (id)parsecStoreId;
- (id)pathForStore:(id)arg1;
- (unsigned long long)persistentStoreCacheTTL;
- (id)persistentStoreCacheTTLTimer;
- (id)persistentStores;
- (id)registerSiriInstrumentationObserver:(id)arg1 observer:(id /* block */)arg2;
- (void)removeSiriInstrumentationObserver:(id)arg1;
- (void)report:(id)arg1 application:(id)arg2;
- (void)report:(id)arg1 application:(id)arg2 onComplete:(id /* block */)arg3;
- (void)reportDataUploadEvent:(id)arg1 application:(id)arg2 completion:(id /* block */)arg3;
- (void)reportParsecFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)reportSiriInstrumentationEvent:(id)arg1 forBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleImmediateUpload;
- (void)setContext:(id)arg1;
- (void)setDbConnections:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPersistentStoreCacheTTL:(unsigned long long)arg1;
- (void)setPersistentStoreCacheTTLTimer:(id)arg1;
- (void)setPersistentStores:(id)arg1;
- (void)setTransactionTTLTimer:(id)arg1;
- (void)setValue:(id)arg1 forUploadHeaderNamed:(id)arg2;
- (void)setWriteTransactionTTL:(unsigned long long)arg1;
- (id)siriReadingStoreForBundleID:(id)arg1;
- (id)siriStoreIdForBundleId:(id)arg1;
- (id)siriWritingStoreForBundleID:(id)arg1 category:(id)arg2;
- (id)transactionTTLTimer;
- (id)uploadHeaders;
- (void)write:(id)arg1 category:(id)arg2 toStoreWithID:(id)arg3 completion:(id /* block */)arg4;
- (id)writeTransaction;
- (unsigned long long)writeTransactionTTL;

@end
