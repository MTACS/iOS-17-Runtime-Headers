
@interface CopresenceCore.PresenceHostSession : NSObject <NSXPCListenerDelegate> {
    void _state;
    void abcReporter;
    void connection;
    void endpoint;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void listener;
    void presenceController;
    void presentDeviceListener;
    void queue;
    void reporter;
    void sessionSuspensionController;
    void suspensionAssertions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workQueue;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
