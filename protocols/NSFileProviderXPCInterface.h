
@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInterface>

@required

- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(NSString *)arg2;
- (void)checkInProviderWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)movingItemAtURL:(void *)arg1 withInfo:(void *)arg2 fileName:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSFileProviderMovingInfo *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProviderMovingResponse *, void*
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(NSString *)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterOfURL:(NSURL *)arg2 withInfo:(NSFileProviderPresenterInfo *)arg3;
- (void)provideItemAtURL:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSFileProvidingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileProvidingResponse *, void*
- (void)providePhysicalItemForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@end
