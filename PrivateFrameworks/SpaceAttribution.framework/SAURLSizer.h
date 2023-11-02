
@interface SAURLSizer : NSObject {
    bool  _alreadyObservingURLs;
    bool  _alreadyReportedXPCError;
    SAReplyController * _sarc;
    NSUUID * _sizerID;
    SADaemonXPC * _xpcOut;
}

@property bool alreadyObservingURLs;
@property bool alreadyReportedXPCError;
@property (retain) SAReplyController *sarc;
@property (retain) NSUUID *sizerID;
@property (retain) SADaemonXPC *xpcOut;

- (void).cxx_destruct;
- (bool)alreadyObservingURLs;
- (bool)alreadyReportedXPCError;
- (void)callHandlerWithError:(id)arg1;
- (id)init;
- (void)invalidateConnection;
- (id)sarc;
- (void)setAlreadyObservingURLs:(bool)arg1;
- (void)setAlreadyReportedXPCError:(bool)arg1;
- (void)setSarc:(id)arg1;
- (void)setSizerID:(id)arg1;
- (void)setXpcOut:(id)arg1;
- (id)sizerID;
- (void)startObservingURLs:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)stopObserving;
- (id)xpcOut;

@end
