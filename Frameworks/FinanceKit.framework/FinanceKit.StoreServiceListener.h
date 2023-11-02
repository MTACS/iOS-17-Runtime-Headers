
@interface FinanceKit.StoreServiceListener : NSObject <NSXPCListenerDelegate> {
    void entitlementsChecker;
    void implementation;
    void listener;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
