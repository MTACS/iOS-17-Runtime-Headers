
@interface PAAccessPruner : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)pruneEventsFromStartTime:(double)arg1 toEndTime:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)queue;

@end
