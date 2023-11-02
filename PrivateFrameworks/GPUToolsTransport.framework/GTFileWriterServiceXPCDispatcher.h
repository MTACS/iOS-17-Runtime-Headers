
@interface GTFileWriterServiceXPCDispatcher : GTXPCDispatcher <GTFileWriterServiceXPCDispatcher> {
    <GTFileWriterService> * _service;
}

- (void).cxx_destruct;
- (void)beginTransferSessionWithFileEntries_basePath_toDevice_options_sessionID_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;
- (void)initiateTransfer_basePath_fromDevice_options_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)startTransfer_basePath_fromDevice_options_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)writeFileData_sessionID_completionHandler_:(id)arg1 replyConnection:(id)arg2;

@end
