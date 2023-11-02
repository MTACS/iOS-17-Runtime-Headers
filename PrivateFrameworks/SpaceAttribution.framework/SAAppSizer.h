
@interface SAAppSizer : NSObject {
    bool  _alreadyReportedXPCError;
    bool  _handlerAlreadyRegistered;
    SAReplyController * _sarc;
    SADaemonXPC * _xpcOut;
}

@property bool alreadyReportedXPCError;
@property bool handlerAlreadyRegistered;
@property (retain) SAReplyController *sarc;
@property (retain) SADaemonXPC *xpcOut;

- (void).cxx_destruct;
- (bool)alreadyReportedXPCError;
- (void)callHandlerWithError:(id)arg1;
- (bool)handlerAlreadyRegistered;
- (id)init;
- (void)invalidateConnection;
- (id)sarc;
- (void)setAlreadyReportedXPCError:(bool)arg1;
- (void)setHandlerAlreadyRegistered:(bool)arg1;
- (void)setSarc:(id)arg1;
- (void)setXpcOut:(id)arg1;
- (void)startObservingWithScanOptions:(unsigned long long)arg1 updateHandler:(id /* block */)arg2;
- (void)startObservingWithUpdateHandler:(id /* block */)arg1;
- (void)stopObserving;
- (id)xpcOut;

@end
