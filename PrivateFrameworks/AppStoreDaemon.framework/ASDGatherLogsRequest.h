
@interface ASDGatherLogsRequest : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    ASDGatherLogsRequestOptions * _options;
}

+ (void)clearHARFiles;

- (void).cxx_destruct;
- (void)createHARFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (void)createLogFileArchiveWithCompletionBlock:(id /* block */)arg1;
- (void)gatherLogsWithCompletionBlock:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1;

@end
