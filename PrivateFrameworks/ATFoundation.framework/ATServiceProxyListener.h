
@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    ATService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ATService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)service;
- (void)setService:(id)arg1;
- (void)start;
- (void)stop;

@end
