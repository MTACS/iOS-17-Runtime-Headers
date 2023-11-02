
@interface GroupActivities.SystemCoordinatorHost : NSObject <NSXPCListenerDelegate> {
    void configuration;
    void connection;
    void currentState;
    void delegate;
    void endpoint;
    void listener;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
