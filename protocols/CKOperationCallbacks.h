
@protocol CKOperationCallbacks

@required

- (void)handleDaemonOperationWillStartWithClassName:(void *)arg1 isTopLevelDaemonOperation:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKOperationLifecycleAction *, NSError *, void*
- (void)handleDaemonRequestWillReceiveWithClassName:(void *)arg1 testRequestProperties:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, CKTestRequestProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDURLRequestLifecycleAction *, NSError *, void*
- (void)handleDaemonRequestWillSendWithClassName:(void *)arg1 testRequestProperties:(void *)arg2 replyBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, CKTestRequestProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDURLRequestLifecycleAction *, NSError *, void*
- (void)handleDiscretionaryOperationShouldStart:(bool)arg1 nonDiscretionary:(bool)arg2 error:(NSError *)arg3;
- (void)handleDiscretionaryOperationShouldSuspend;
- (void)handleFinishWithAssetDownloadStagingInfo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: CKAssetDownloadStagingInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSFileHandle *, NSError *, void*
- (void)handleLongLivedOperationDidPersist;
- (void)handleOperationDidCompleteWithMetrics:(CKOperationMetrics *)arg1 error:(NSError *)arg2;
- (void)handleRequestDidComplete:(CKRequestInfo *)arg1;
- (void)handleSystemDidImposeInfo:(CKOperationGroupSystemImposedInfo *)arg1;
- (void)openFileWithOpenInfo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CKFileOpenInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKFileOpenResult *, NSError *, void*

@end
