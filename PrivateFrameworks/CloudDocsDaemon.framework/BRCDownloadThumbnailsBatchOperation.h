
@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation {
    id /* block */  _perDownloadCompletionBlock;
}

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void).cxx_destruct;
- (id)actionPrettyName;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1;
- (void)mainWithTransfers:(id)arg1;
- (id /* block */)perDownloadCompletionBlock;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)setPerDownloadCompletionBlock:(id /* block */)arg1;
- (id)transferredObjectsPrettyName;

@end
