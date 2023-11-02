
@interface HomeEnergyDaemon.HomeEnergyListener : NSObject <NSXPCListenerDelegate> {
    void xpcListener;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
