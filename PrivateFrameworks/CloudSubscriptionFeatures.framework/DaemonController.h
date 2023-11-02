
@interface DaemonController : NSObject <NSXPCListenerDelegate> {
    void accountStore;
    void configStore;
    void failureActivityInterval;
    void geoCache;
    void listener;
    void maximumActivityInterval;
    void minimumActivityInterval;
    void requestHandler;
    void taskLimiters;
    void urlSession;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;

@end
