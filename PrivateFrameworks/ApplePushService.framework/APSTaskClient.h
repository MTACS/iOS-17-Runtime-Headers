
@interface APSTaskClient : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _connection;
    NSString * _environment;
    NSMutableArray * _outstandingDNSRequests;
}

- (void).cxx_destruct;
- (void)_clearOutstandingTasks:(long long)arg1;
- (id)_findDNSRequestForHostname:(id)arg1;
- (void)_timeoutOutstandingRequests;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;
- (id)resolveDNS:(id)arg1;

@end
