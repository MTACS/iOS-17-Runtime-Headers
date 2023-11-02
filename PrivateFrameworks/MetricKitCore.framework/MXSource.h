
@interface MXSource : NSObject <MXSourceHandlerDelegate, MXSourceXPCServer, NSXPCListenerDelegate> {
    NSObject<OS_os_log> * _MXSourceLogHandle;
    <MXBundleUtilProtocol> * _bundleUtil;
    MXSourceHandler * _handler;
    NSObject<OS_dispatch_queue> * _iVarQueue;
    MXPayloadValidator * _payloadValidator;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSXPCListener * _xpcListener;
}

@property (retain) NSObject<OS_os_log> *MXSourceLogHandle;
@property (retain) <MXBundleUtilProtocol> *bundleUtil;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) MXSourceHandler *handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain) MXPayloadValidator *payloadValidator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedSource;

- (void).cxx_destruct;
- (id)MXSourceLogHandle;
- (void)_initIvar;
- (void)_initLogHandle;
- (void)_initQueue;
- (void)_invalidateConnection;
- (void)_setupExportedInterfaceForConnection:(id)arg1;
- (void)_setupHandlersForConnection:(id)arg1;
- (void)_setupRemoteInterfaceForConnection:(id)arg1;
- (void)_startListenClientXPC;
- (id)bundleUtil;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)arg1;
- (void)deliverDummyPayloadForClient:(id)arg1;
- (void)diagnosticPayloadDidCacheToSourceDirectory;
- (id)handler;
- (id)iVarQueue;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)metricPayloadDidCacheToSourceDirectory;
- (id)payloadValidator;
- (id)requestQueue;
- (void)setBundleUtil:(id)arg1;
- (void)setIVarQueue:(id)arg1;
- (void)setMXSourceLogHandle:(id)arg1;
- (void)setPayloadValidator:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)writeDiagnosticDataWithPayload:(id)arg1;
- (bool)writeDiagnosticReport:(id)arg1 atAppContainerPath:(id)arg2 forClient:(id)arg3 withError:(id*)arg4;
- (void)writeMetricDataWithPayload:(id)arg1;
- (id)xpcListener;

@end
