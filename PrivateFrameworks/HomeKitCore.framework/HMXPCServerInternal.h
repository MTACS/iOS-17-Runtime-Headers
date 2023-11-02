
@interface HMXPCServerInternal : NSObject <NSXPCListenerDelegate> {
    void listener;
    void modelController;
    void proxies;
    void storeServer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStoreURL:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
