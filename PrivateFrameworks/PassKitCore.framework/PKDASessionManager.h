
@interface PKDASessionManager : NSObject <PKSessionDelegate> {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _queue;
    PKDASession * _session;
    id /* block */  _sessionCreationBlock;
    NSMutableArray * _workItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createSession;
- (id)description;
- (id)initWithQueue:(id)arg1 sessionCreationBlock:(id /* block */)arg2;
- (void)performBlockWithSession:(id /* block */)arg1;
- (id)queue;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end
