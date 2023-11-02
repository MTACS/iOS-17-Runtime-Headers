
@interface SiriPrivateLearningLogging.PLLoggingServiceListenerDelegate : NSObject <NSXPCListenerDelegate> {
    void connections;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
