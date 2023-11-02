
@protocol PDSXPCHandshake

@required

- (void)connectInternalWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PDSRemoteInternal> *, NSError *, void*
- (void)connectWithClientID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PDSRemote> *, NSError *, void*

@end
