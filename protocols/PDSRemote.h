
@protocol PDSRemote

@required

- (void)activeUsersWithClientID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)batchUpdateEntries:(void *)arg1 forClientID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)entriesForClientID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)entriesForUser:(void *)arg1 clientID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: PDSUser *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeAllEntriesForUser:(void *)arg1 withClientID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: PDSUser *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)storeEntries:(void *)arg1 deleteEntries:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)usersWithClientID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
