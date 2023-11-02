
@interface _PRUISPosterRenderingEnqueuedSnapshot : NSObject {
    id /* block */  _completionBlock;
    PRUISPosterSnapshotRequest * _snapshotRequest;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) PRUISPosterSnapshotRequest *snapshotRequest;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithSnapshotRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setSnapshotRequest:(id)arg1;
- (id)snapshotRequest;

@end
