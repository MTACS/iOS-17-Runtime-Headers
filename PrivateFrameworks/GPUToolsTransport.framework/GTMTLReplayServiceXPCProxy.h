
@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService> {
    NSMutableDictionary * _acceleratorStructureSessionToDispatcherId;
    GTBulkDataServiceXPCProxy * _bulkDataProxy;
    GTServiceConnection * _connection;
    id /* block */  _connectionhandler;
    <GTXPCConnection> * _gtXPCConnection;
    NSSet * _ignoreMethods;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _observerIdToPort;
    GTProcessInfo * _processInfo;
    struct GTTpacketStream { } * _tstream;
}

@property (nonatomic, readonly) GTProcessInfo *processInfo;

- (void).cxx_destruct;
- (bool)cancel:(unsigned long long)arg1;
- (id)decode:(id)arg1;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)display:(id)arg1;
- (id)fetch:(id)arg1;
- (id)flushRpackets;
- (id)initWithConnection:(id)arg1 serviceInfo:(id)arg2;
- (bool)load:(id)arg1 error:(id*)arg2;
- (bool)pause:(unsigned long long)arg1;
- (id)processInfo;
- (id)profile:(id)arg1;
- (id)query:(id)arg1;
- (id)raytrace:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)resume:(unsigned long long)arg1;
- (id)shaderdebug:(id)arg1;
- (void)terminateProcess;
- (id)update:(id)arg1;

@end
