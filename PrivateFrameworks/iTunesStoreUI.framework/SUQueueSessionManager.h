
@interface SUQueueSessionManager : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _downloadManagers;
    NSMutableArray * _preorderManagers;
}

- (void)_endQueueSession:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithManagerOptions:(id)arg1 fromArray:(id)arg2;
- (id)_queueSessionWithQueue:(id)arg1 fromArray:(id)arg2;
- (id)beginDownloadManagerSessionForDownloadKind:(id)arg1;
- (id)beginDownloadManagerSessionWithDownloadKinds:(id)arg1;
- (id)beginDownloadManagerSessionWithManagerOptions:(id)arg1;
- (id)beginPreorderManagerSessionWithItemKinds:(id)arg1;
- (void)dealloc;
- (void)endDownloadManagerSessionForManager:(id)arg1;
- (void)endPreorderManagerSessionWithManager:(id)arg1;
- (id)init;

@end
