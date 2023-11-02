
@protocol ACHDatabaseAssertionServerInterface <NSObject>

@required

- (void)remote_acquireDatabaseAssertionWithIdentifier:(void *)arg1 duration:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)remote_invalidateAssertionWithToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
