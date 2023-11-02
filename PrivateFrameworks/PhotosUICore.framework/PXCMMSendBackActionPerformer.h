
@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer {
    PXCMMContext * _sendBackContext;
}

@property (nonatomic, retain) PXCMMContext *sendBackContext;

- (void).cxx_destruct;
- (void)_completeSendBackActionWithSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)performSendBackActionWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sendBackContext;
- (void)setSendBackContext:(id)arg1;

@end
