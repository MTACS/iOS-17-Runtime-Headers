
@interface FPDAccessControlStore : NSObject {
    NSURL * _databaseBaseURL;
    PQLConnection * _dbConnection;
    bool  _dbIsOpen;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedStore;

- (void).cxx_destruct;
- (void)addLRUSignature:(id)arg1;
- (id)bookmarkForItemID:(id)arg1 consumerIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDatabaseBaseURL:(id)arg1;
- (id)keyForBundleIdentifier:(id)arg1 generateIfNotFound:(bool)arg2 keyGenBlock:(id /* block */)arg3;
- (bool)lookupLRUSignature:(id)arg1;
- (void)openDatabase;
- (id)parseUnverifiedBookmark:(id)arg1;
- (void)performWithDBConnection:(id /* block */)arg1;
- (void)reopenDatabaseAfterUnlock;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (void)validateDatabase:(id)arg1;
- (id)verifyBookmark:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 consumerIdentifier:(id)arg3;

@end
