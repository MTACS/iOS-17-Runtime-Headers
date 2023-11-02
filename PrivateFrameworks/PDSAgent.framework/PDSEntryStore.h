
@interface PDSEntryStore : NSObject {
    <PDSCDCache> * _cache;
    <PDSEntryStoreDelegate> * _delegate;
}

@property (nonatomic, retain) <PDSCDCache> *cache;
@property (nonatomic) <PDSEntryStoreDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_permitTransitionFromState:(unsigned char)arg1 toState:(unsigned char)arg2;
- (id)activeUsers;
- (id)activeUsersWithClientID:(id)arg1;
- (id)cache;
- (id)delegate;
- (bool)deleteEntriesForUser:(id)arg1 withState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)deleteEntry:(id)arg1 withError:(id*)arg2;
- (id)entries;
- (id)entriesForUser:(id)arg1;
- (id)entriesForUser:(id)arg1 withClientID:(id)arg2;
- (id)entriesWithClientID:(id)arg1;
- (bool)hasActiveEntries;
- (bool)hasPendingEntries;
- (id)initWithCache:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)storeEntries:(id)arg1 deleteEntries:(id)arg2 withError:(id*)arg3;
- (bool)storeEntry:(id)arg1 withError:(id*)arg2;
- (bool)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4;
- (id)users;
- (id)usersWithClientID:(id)arg1;

@end
