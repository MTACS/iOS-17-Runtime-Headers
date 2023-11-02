
@interface CARSessionRequestAgent : NSObject <NSXPCListenerDelegate> {
    CARSessionRequestHandlerProxy * _handlerProxy;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CARSessionRequestHandlerProxy *handlerProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, readonly) <CARSessionRequestHandling> *requestHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)handlerProxy;
- (id)initWithRequestHandler:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)requestHandler;
- (void)setHandlerProxy:(id)arg1;
- (void)setListener:(id)arg1;
- (bool)wantsCarPlayControlAdvertisingForUSB;
- (bool)wantsCarPlayControlAdvertisingForWiFiUUID:(id)arg1;

@end
