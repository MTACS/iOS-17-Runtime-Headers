
@protocol SYSessionDelegate <NSObject>

@required

- (void)syncSession:(void *)arg1 applyChanges:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SYSession *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncSession:(SYSession *)arg1 didEndWithError:(NSError *)arg2;
- (unsigned int)syncSession:(void *)arg1 enqueueChanges:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 8: SYSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <SYChange> *, void*, id*
- (bool)syncSession:(SYSession *)arg1 resetDataStoreWithError:(id*)arg2;

@optional

- (void)resetDataStoreForSyncSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SYSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)syncSession:(SYSession *)arg1 restartChanges:(id*)arg2;
- (bool)syncSession:(SYSession *)arg1 rollbackChangesWithError:(id*)arg2;
- (void)syncSession:(SYSession *)arg1 successfullySynced:(NSSet *)arg2;

@end
