
@interface AEAssessmentStateSourceRegisteringProxy : NSObject <AEAssessmentStateSourceRegistering> {
    NSObject<OS_dispatch_queue> * _queue;
    AEXPCProxy * _xpcProxy;
}

+ (id)daemonProxyWithQueue:(id)arg1;
+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)registerPublisherWithLifetimeEndpoint:(id)arg1 completion:(id /* block */)arg2;

@end
