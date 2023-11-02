
@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {
    PKPaymentWebServiceLocalProxyTargetDevice * _localTarget;
    NSXPCListener * _remoteListener;
    NSMutableArray * _remoteTargets;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)webServiceWithProxiedTargetDevice:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWebService:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localProxyTargetDevice;

@end
