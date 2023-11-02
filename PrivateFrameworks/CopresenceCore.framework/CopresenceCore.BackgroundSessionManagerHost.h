
@interface CopresenceCore.BackgroundSessionManagerHost : NSObject <NSXPCListenerDelegate> {
    void clientIdentifierToDataSourceMap;
    void connections;
    void featureFlags;
    void listeners;
    void queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
