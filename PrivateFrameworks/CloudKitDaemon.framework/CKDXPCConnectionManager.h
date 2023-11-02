
@interface CKDXPCConnectionManager : NSObject {
    NSOperationQueue * _clientConnectionQueue;
    NSMutableArray * _clientConnections;
    NSObject<OS_dispatch_source> * _sighandlerSource;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _statusReportCallbackQueue;
    NSMutableArray * _statusReportCallbacks;
    NSObject<OS_dispatch_queue> * _statusReportQueue;
    NSObject<OS_dispatch_source> * _statusReportRequestSource;
    NSMutableArray * _tearDownOperations;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSOperationQueue *clientConnectionQueue;
@property (nonatomic, retain) NSMutableArray *clientConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *sighandlerSource;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusReportCallbackQueue;
@property (nonatomic, retain) NSMutableArray *statusReportCallbacks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusReportQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *statusReportRequestSource;
@property (nonatomic, retain) NSMutableArray *tearDownOperations;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (void)clouddStarted;
+ (id)sharedConnectionManager;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)_dumpStatusReportToFileHandle:(id)arg1;
- (void)activate;
- (id)clientConnectionQueue;
- (id)clientConnections;
- (void)dealloc;
- (void)dumpStatusReportToFileHandle:(id)arg1;
- (void)enumerateConnections:(id /* block */)arg1;
- (id)initInternal;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClientConnectionQueue:(id)arg1;
- (void)setClientConnections:(id)arg1;
- (void)setSighandlerSource:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setStatusReportCallbackQueue:(id)arg1;
- (void)setStatusReportCallbacks:(id)arg1;
- (void)setStatusReportQueue:(id)arg1;
- (void)setStatusReportRequestSource:(id)arg1;
- (void)setTearDownOperations:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)sighandlerSource;
- (unsigned long long)stateHandle;
- (id)statusReportCallbackQueue;
- (id)statusReportCallbacks;
- (id)statusReportQueue;
- (id)statusReportRequestSource;
- (void)statusReportWithCompletionHandler:(id /* block */)arg1;
- (id)tearDownOperations;
- (id)xpcListener;

@end
