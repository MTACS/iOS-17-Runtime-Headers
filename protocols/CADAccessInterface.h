
@protocol CADAccessInterface

@required

- (void)CADDatabaseGetAccess:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, long long, long long, void*
- (void)CADDatabaseRequestAccessForEntityType:(void *)arg1 desiredFullAccess:(void *)arg2 isBlockingUIThread:(void *)arg3 reason:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: unsigned long long, bool, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, long long, void*
- (void)CADDatabaseResetWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseSetInitializationOptions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADDatabaseInitializationOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*

@end
