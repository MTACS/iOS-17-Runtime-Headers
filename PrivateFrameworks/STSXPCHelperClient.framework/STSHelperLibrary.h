
@interface STSHelperLibrary : NSObject <STSHelperCallbackProtocol> {
    NSObject<STSHelperLibraryDelegateProtocol> * _delegate;
    unsigned long long  _handoverConfig;
    STSRemoteTransceiverProxyListener * _nfcReaderListener;
    STSRemoteTransceiverProxyListener * _seProxyListener;
    unsigned long long  _type;
    STSUnifiedAccessHandler * _unifiedAccessHandler;
    NSXPCConnection * _xpc;
}

@property (nonatomic) NSObject<STSHelperLibraryDelegateProtocol> *delegate;
@property (nonatomic, readonly) unsigned long long handoverConfig;
@property (nonatomic, retain) STSRemoteTransceiverProxyListener *nfcReaderListener;
@property (nonatomic, retain) STSRemoteTransceiverProxyListener *seProxyListener;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) STSUnifiedAccessHandler *unifiedAccessHandler;
@property (nonatomic, retain) NSXPCConnection *xpc;

- (void).cxx_destruct;
- (id)_stsHelperCallbackInterface;
- (id)_stsHelperInterface;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)connectRemoteWithConnectionHandoverSelect:(id)arg1 callbackQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)connectRemoteWithQRCodeHandoverData:(id)arg1 callbackQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)connectToNotificationListener:(id)arg1;
- (id)delegate;
- (void)didInvalidateXPC:(bool)arg1 connection:(id)arg2;
- (void)generateConnectionHandoverRequestWithQueue:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)generateQRCodeCHRequestAndStartACWithQueue:(id)arg1 responseHandler:(id /* block */)arg2;
- (unsigned long long)handoverConfig;
- (id)init;
- (void)invalidate;
- (id)nfcReaderListener;
- (void)processConnectionHandoverRequest:(id)arg1 callbackQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)processConnectionHandoverRequestData:(id)arg1 callbackQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)processUnifiedAccessStepupAPDU:(id)arg1 callbackQueue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)restartNFCReaderDiscovery;
- (id)seProxyListener;
- (void)setDelegate:(id)arg1;
- (void)setNfcReaderListener:(id)arg1;
- (void)setSeProxyListener:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUnifiedAccessHandler:(id)arg1;
- (void)setXpc:(id)arg1;
- (bool)setupConnectWithXPCService;
- (id)signalUnifiedAccessStepUpWithEventDictionary:(id)arg1;
- (id)startBTDeviceWithServiceUUID:(id)arg1 peripheralAddress:(id)arg2 centralRole:(bool)arg3;
- (id)startBTReaderWithServiceUUID:(id)arg1 peripheralAddress:(id)arg2 centralRole:(bool)arg3;
- (id)startISO18013WithConnectionHandoverConfiguration:(unsigned long long)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (id)startReaderSEProxyListener:(id)arg1 workQueue:(id)arg2;
- (id)startSEProxyListener:(id)arg1 parameters:(id)arg2 workQueue:(id)arg3;
- (id)startWifiPublisherWithServiceName:(id)arg1 datapathPMK:(id)arg2 datapathPMKID:(id)arg3;
- (id)startWifiSubscriberWithServiceName:(id)arg1 datapathPMK:(id)arg2 datapathPMKID:(id)arg3;
- (void)stopReaderSEProxyListener;
- (void)stopSEProxyListener;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)type;
- (id)unifiedAccessHandler;
- (id)xpc;

@end
