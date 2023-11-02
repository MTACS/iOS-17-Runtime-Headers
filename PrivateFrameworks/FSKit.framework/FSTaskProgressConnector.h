
@interface FSTaskProgressConnector : NSObject <FSTaskProgressXPC, NSXPCListenerDelegate> {
    NSXPCListenerEndpoint * _endpoint;
    NSXPCListener * _listener;
    NSMutableSet * _pendingReplyBlocks;
    NSProgress * _progress;
    FSTaskDescription * _taskDesc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (retain) NSMutableSet *pendingReplyBlocks;
@property (retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (copy) FSTaskDescription *taskDesc;

+ (id)newForProgress:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)endpoint;
- (id)getProgress:(id /* block */)arg1;
- (id)initWithProgress:(id)arg1 description:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pendingReplyBlocks;
- (id)progress;
- (void)setListener:(id)arg1;
- (void)setPendingReplyBlocks:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTaskDesc:(id)arg1;
- (id)taskDesc;

@end
