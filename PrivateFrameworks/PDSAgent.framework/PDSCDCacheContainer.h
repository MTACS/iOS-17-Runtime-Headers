
@interface PDSCDCacheContainer : NSObject <PDSCDCache, PDSKVStore> {
    NSPersistentContainer * _container;
    NSURL * _containingPath;
}

@property (nonatomic) NSPersistentContainer *container;
@property (nonatomic, retain) NSURL *containingPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_KVEntryForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_cdRegistrationsMatchingEntry:(id)arg1 inContext:(id)arg2;
- (id)_cdRegistrationsMatchingUser:(id)arg1 withClientID:(id)arg2 inContext:(id)arg3;
- (id)_cdUsersMatchingUserID:(id)arg1 userType:(short)arg2 inContext:(id)arg3;
- (bool)_deleteEntry:(id)arg1 context:(id)arg2 withError:(id*)arg3;
- (id)_entriesFromRegistrations:(id)arg1 inContext:(id)arg2;
- (id)_loadUsersIncludingOnlyActive:(bool)arg1;
- (bool)_storeEntry:(id)arg1 transitionBlock:(id /* block */)arg2 context:(id)arg3 withError:(id*)arg4;
- (void)_syncBlockWithContext:(id /* block */)arg1;
- (bool)_updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)_updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4;
- (id)_usersForClientID:(id)arg1 activeOnly:(bool)arg2;
- (id)allStoredValues;
- (id)container;
- (id)containingPath;
- (id)dataForKey:(id)arg1;
- (void)deleteCache;
- (bool)deleteEntriesForUser:(id)arg1 withState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)deleteEntry:(id)arg1 withError:(id*)arg2;
- (bool)hasActiveEntries;
- (bool)hasPendingEntries;
- (id)initWithContainingPath:(id)arg1;
- (id)loadAllActiveUsers;
- (id)loadAllActiveUsersForClientID:(id)arg1;
- (id)loadAllEntries;
- (id)loadAllEntriesForClientID:(id)arg1;
- (id)loadAllEntriesUser:(id)arg1;
- (id)loadAllEntriesUser:(id)arg1 withClientID:(id)arg2;
- (id)loadAllUsers;
- (id)loadAllUsersForClientID:(id)arg1;
- (id)loadPendingEntries;
- (id)loadWithError:(id*)arg1;
- (id)numberForKey:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainingPath:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (bool)storeEntries:(id)arg1 transitionBlock:(id /* block */)arg2 deleteEntries:(id)arg3 withError:(id*)arg4;
- (bool)storeEntry:(id)arg1 transitionBlock:(id /* block */)arg2 withError:(id*)arg3;
- (bool)storeEntry:(id)arg1 withError:(id*)arg2;
- (id)stringForKey:(id)arg1;
- (bool)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4;
- (bool)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 withError:(id*)arg3;

@end
