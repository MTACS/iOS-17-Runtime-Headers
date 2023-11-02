
@interface MTSXPCListener : HMFObject <MTSXPCListener, NSXPCListenerDelegate> {
    <MTSXPCListenerDelegate> * _delegate;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property <MTSXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithXPCListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)xpcListener;

@end
