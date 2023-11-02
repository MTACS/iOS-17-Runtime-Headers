
@interface _UIDruidSourceConnection : NSObject <_DUIClientSessionSource, _DUIClientSource, _UIDruidSourceConnection> {
    id /* block */  _canHandOffCancelledItemsBlock;
    bool  _cancelled;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _connectionWatchdogTimer;
    id /* block */  _dataTransferFinishedBlock;
    id /* block */  _dragCompletionBlock;
    id /* block */  _dragPreviewProviderBlock;
    id /* block */  _handOffCancelledItemsBlock;
    <_DUIServerSessionSource> * _serverSession;
}

@property (nonatomic, copy) id /* block */ canHandOffCancelledItemsBlock;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ dataTransferFinishedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dragCompletionBlock;
@property (nonatomic, copy) id /* block */ dragPreviewProviderBlock;
@property (nonatomic, copy) id /* block */ handOffCancelledItemsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_internalDragFailed;
- (id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
- (void)beginDragWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)canHandOffCancelledItemsBlock;
- (void)cancelDrag;
- (oneway void)checkCanHandOffCancelledItems:(id)arg1 withReply:(id /* block */)arg2;
- (id /* block */)dataTransferFinishedBlock;
- (oneway void)dataTransferSessionFinished;
- (void)dirtyItems:(id)arg1;
- (id /* block */)dragCompletionBlock;
- (void)dragDidExitApp;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (id /* block */)dragPreviewProviderBlock;
- (oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
- (id /* block */)handOffCancelledItemsBlock;
- (id)init;
- (bool)isCancelled;
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(id /* block */)arg2;
- (void)setCanHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)setDataTransferFinishedBlock:(id /* block */)arg1;
- (void)setDragCompletionBlock:(id /* block */)arg1;
- (void)setDragPreviewProviderBlock:(id /* block */)arg1;
- (void)setHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(bool)arg3;

@end
