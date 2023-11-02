
@protocol PDSCDCache <NSObject>

@required

- (void)deleteCache;
- (bool)deleteEntriesForUser:(PDSUser *)arg1 withState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)deleteEntry:(PDSEntry *)arg1 withError:(id*)arg2;
- (bool)hasActiveEntries;
- (bool)hasPendingEntries;
- (NSArray *)loadAllActiveUsers;
- (NSArray *)loadAllActiveUsersForClientID:(NSString *)arg1;
- (NSArray *)loadAllEntries;
- (NSArray *)loadAllEntriesForClientID:(NSString *)arg1;
- (NSArray *)loadAllEntriesUser:(PDSUser *)arg1;
- (NSArray *)loadAllEntriesUser:(PDSUser *)arg1 withClientID:(NSString *)arg2;
- (NSArray *)loadAllUsers;
- (NSArray *)loadAllUsersForClientID:(NSString *)arg1;
- (NSArray *)loadPendingEntries;
- (bool)storeEntries:(void *)arg1 transitionBlock:(void *)arg2 deleteEntries:(void *)arg3 withError:(void *)arg4; // needs 4 arg types, found 10: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned char, unsigned char, void*, NSSet *, id*
- (bool)storeEntry:(void *)arg1 transitionBlock:(void *)arg2 withError:(void *)arg3; // needs 3 arg types, found 9: PDSEntry *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, unsigned char, unsigned char, void*, id*
- (bool)storeEntry:(PDSEntry *)arg1 withError:(id*)arg2;
- (bool)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3;
- (bool)updateEntryState:(unsigned char)arg1 forUser:(PDSUser *)arg2 clientID:(NSString *)arg3 withError:(id*)arg4;
- (bool)updateEntryState:(unsigned char)arg1 forUser:(PDSUser *)arg2 withError:(id*)arg3;

@end
