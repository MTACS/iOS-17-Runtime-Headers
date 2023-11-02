
@protocol CKXPCContainerScopedClient

@required

- (void)consumeSandboxExtensions:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleSharingUIUpdatedShare:(void *)arg1 recordID:(void *)arg2 isDeleted:(void *)arg3 error:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: CKShare *, CKRecordID *, bool, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
