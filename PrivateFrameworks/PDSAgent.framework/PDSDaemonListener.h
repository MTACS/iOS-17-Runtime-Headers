
@interface PDSDaemonListener : NSObject <PDSRemote> {
    bool  _bypassClientIDCheck;
    NSArray * _clientIDs;
    PDSEntryStore * _entryStore;
    PDSUserTracker * _userTracker;
}

@property (nonatomic, readonly) bool bypassClientIDCheck;
@property (nonatomic, retain) NSArray *clientIDs;
@property (nonatomic, retain) PDSEntryStore *entryStore;
@property (nonatomic, retain) PDSUserTracker *userTracker;

- (void).cxx_destruct;
- (void)activeUsersWithClientID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)bypassClientIDCheck;
- (id)clientIDs;
- (void)entriesForClientID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)entryStore;
- (id)initWithClientIDs:(id)arg1 entryStore:(id)arg2 userTracker:(id)arg3;
- (id)initWithEntryStore:(id)arg1 userTracker:(id)arg2;
- (void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setClientIDs:(id)arg1;
- (void)setEntryStore:(id)arg1;
- (void)setUserTracker:(id)arg1;
- (void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)userTracker;
- (void)usersWithClientID:(id)arg1 withCompletion:(id /* block */)arg2;

@end
