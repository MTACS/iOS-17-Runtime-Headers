
@interface GTBulkDataServiceXPCDispatcher : GTXPCDispatcher <GTBulkDataServiceXPCDispatcher> {
    <GTBulkDataService> * _service;
}

- (void).cxx_destruct;
- (void)downloadData_usingTransferOptions_chunkHandler_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;
- (void)newUploadWithDescriptor_error_:(id)arg1 replyConnection:(id)arg2;
- (void)uploadChunk_forHandle_isFinalChunk_error_:(id)arg1 replyConnection:(id)arg2;

@end
