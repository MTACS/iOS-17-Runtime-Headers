
@interface TabSnapshotQueueItem : NSObject {
    id /* block */  _completionHandler;
    <TabSnapshotContentProvider> * _contentProvider;
    TabSnapshotRequest * _request;
    bool  _snappshottingIsInProgress;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, retain) <TabSnapshotContentProvider> *contentProvider;
@property (nonatomic, readonly) TabSnapshotRequest *request;
@property (nonatomic) bool snappshottingIsInProgress;

- (void).cxx_destruct;
- (void)appendCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)contentProvider;
- (id)initWithRequest:(id)arg1 contentProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)request;
- (void)setContentProvider:(id)arg1;
- (void)setSnappshottingIsInProgress:(bool)arg1;
- (bool)snappshottingIsInProgress;

@end
