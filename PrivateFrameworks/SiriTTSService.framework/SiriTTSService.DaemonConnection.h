
@interface SiriTTSService.DaemonConnection : NSObject {
    void asyncProxy;
    void connection;
    void syncProxy;
    void weakDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
