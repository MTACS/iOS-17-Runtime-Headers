
@protocol BRShareOperationLegacyProtocol <BRShareOperationProtocol>

@required

- (void)createSharingInfoForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyEtagAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyParticipantTokenAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyShareInfoAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopySharingAccessToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopySharingInfoAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSURL *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyShortTokenAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toModifyRecordAccessAtURL:(void *)arg2 allowAccess:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSObject<BROperationClient> *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toPrepFolderForSharingAt:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toProcessSubitemsAtURL:(void *)arg2 maxSubsharesFailures:(void *)arg3 processType:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSObject<BROperationClient> *, NSURL *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
