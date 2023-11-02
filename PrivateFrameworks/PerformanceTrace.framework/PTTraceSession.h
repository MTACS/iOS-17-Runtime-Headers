
@interface PTTraceSession : NSObject {
    PTTraceConfig * _config;
    NSXPCConnection * _connection;
    <PTTraceSessionDelegate> * _delegate;
    bool  _isValid;
}

@property (nonatomic, retain) PTTraceConfig *config;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) <PTTraceSessionDelegate> *delegate;
@property (nonatomic, readonly) bool isValid;

+ (id)initWithConfig:(id)arg1;

- (void).cxx_destruct;
- (void)_didPingService:(id)arg1;
- (id)_getRemoteObjectProxy;
- (void)_initConnection;
- (void)_invalidateSession;
- (void)_ping:(id)arg1;
- (id)config;
- (id)connection;
- (id)delegate;
- (id)init;
- (bool)isValid;
- (void)performanceTraceDidComplete:(id)arg1 withToken:(id)arg2 withError:(id)arg3;
- (void)performanceTraceDidStart:(id)arg1;
- (void)performanceTraceDidStop:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPerformanceTrace;
- (void)stopPerformanceTrace;

@end
