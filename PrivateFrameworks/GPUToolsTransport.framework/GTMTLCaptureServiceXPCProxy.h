
@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    GTServiceConnection * _connection;
    NSSet * _ignoreMethods;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _observerIdToPort;
    GTServiceProperties * _serviceProperties;
}

@property (nonatomic, readonly, retain) GTServiceProperties *serviceProperties;

- (void).cxx_destruct;
- (void)abort;
- (id)createCaptureDescriptor;
- (void)deregisterObserver:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (unsigned long long)nextRequestID;
- (id)query:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)resume;
- (id)serviceProperties;
- (id)startWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)update:(id)arg1;

@end
