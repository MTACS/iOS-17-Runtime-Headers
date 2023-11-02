
@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    BRCClientZone * _clientZone;
    id /* block */  _perUploadCompletionBlock;
}

@property (copy) id /* block */ perUploadCompletionBlock;

- (void).cxx_destruct;
- (void)_publishUploadProgress:(id)arg1;
- (void)_uploadRecordsByID:(id)arg1;
- (id)actionPrettyName;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 clientZone:(id)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id /* block */)perUploadCompletionBlock;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)setPerUploadCompletionBlock:(id /* block */)arg1;

@end
