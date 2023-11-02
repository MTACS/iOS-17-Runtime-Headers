
@protocol GTBulkDataServiceXPCDispatcher <GTXPCDispatcher>

@required

- (void)downloadData_usingTransferOptions_chunkHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)newUploadWithDescriptor_error_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)uploadChunk_forHandle_isFinalChunk_error_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end
