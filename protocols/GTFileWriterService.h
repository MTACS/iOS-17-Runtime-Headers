
@protocol GTFileWriterService

@required

- (void)beginTransferSessionWithFileEntries:(void *)arg1 basePath:(void *)arg2 toDevice:(void *)arg3 options:(void *)arg4 sessionID:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSString *, NSString *, GTFileTransferOptions *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)initiateTransfer:(void *)arg1 basePath:(void *)arg2 fromDevice:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, GTFileTransferOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startTransfer:(void *)arg1 basePath:(void *)arg2 fromDevice:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSArray *, NSString *, NSString *, GTFileTransferOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)writeFileData:(void *)arg1 sessionID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
