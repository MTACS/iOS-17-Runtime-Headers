
@interface FPDActionOperationEngine : NSObject {
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    FPDServer * _server;
}

- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (id)inFlightOperations;
- (id)init;
- (id)initWithServer:(id)arg1;
- (void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;

@end
