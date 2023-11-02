
@interface CPLFileWatcher : NSObject {
    <CPLFileWatcherDelegate> * _delegate;
    NSURL * _fileURL;
    NSString * _name;
    unsigned long long  _nodeInode;
    NSObject<OS_dispatch_source> * _nodeSource;
    NSObject<OS_dispatch_source> * _parentSource;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CPLFileWatcherDelegate> *delegate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingNode;
- (void)_stopWatchingParent;
- (void)_updateWatchingNode;
- (id)delegate;
- (id)description;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithFileURL:(id)arg1 name:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (id)name;
- (id)redactedDescription;
- (void)setDelegate:(id)arg1;
- (void)startWatching;
- (void)stopWatching;

@end
