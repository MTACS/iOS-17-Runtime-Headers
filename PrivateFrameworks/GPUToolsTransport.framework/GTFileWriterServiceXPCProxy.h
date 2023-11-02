
@interface GTFileWriterServiceXPCProxy : NSObject <GTFileWriterService> {
    <GTXPCConnection> * _connection;
    NSSet * _ignoreMethods;
}

- (void).cxx_destruct;
- (void)beginTransferSessionWithFileEntries:(id)arg1 basePath:(id)arg2 toDevice:(id)arg3 options:(id)arg4 sessionID:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)respondsToSelector:(SEL)arg1;
- (void)startTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)writeFileData:(id)arg1 sessionID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
