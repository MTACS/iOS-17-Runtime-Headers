
@protocol BRShareOperationProtocol

@required

- (void)copyCurrentUserNameAndDisplayHandleWithReply:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSPersonNameComponents *, NSString *, NSString *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyDocumentURLForRecordID:(void *)arg2 syncIfNeeded:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSObject<BROperationClient> *, CKRecordID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyShareURLForShare:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSURL *, NSError *, void*
- (void)startOperation:(void *)arg1 toLookupShareParticipants:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)startOperation:(void *)arg1 toSaveSharingInfo:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)startOperation:(void *)arg1 toUnshareShare:(void *)arg2 forceDelete:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSObject<BROperationClient> *, CKShare *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
