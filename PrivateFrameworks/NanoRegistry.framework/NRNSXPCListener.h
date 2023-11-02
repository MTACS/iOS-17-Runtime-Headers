
@interface NRNSXPCListener : NSXPCListener <NRNSXPCListenerProtocol, NSXPCListenerDelegate> {
    <NRNSXPCListenerDelegate> * _listenerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NRNSXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
