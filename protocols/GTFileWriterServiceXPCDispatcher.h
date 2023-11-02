
@protocol GTFileWriterServiceXPCDispatcher <GTXPCDispatcher>

@required

- (void)beginTransferSessionWithFileEntries_basePath_toDevice_options_sessionID_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)initiateTransfer_basePath_fromDevice_options_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)startTransfer_basePath_fromDevice_options_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)writeFileData_sessionID_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
