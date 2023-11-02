
@interface CUFileServer : NSObject <CUActivatable> {
    bool  _activateCalled;
    RPCompanionLinkClient * _clinkClient;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSString * _label;
    unsigned long long  _lastSessionID;
    NSURL * _rootDirectoryURL;
    BOOL  _rootPath;
    NSString * _serviceType;
    NSMutableDictionary * _sessionMap;
    NSObject<OS_dispatch_source> * _sessionTimer;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSURL *rootDirectoryURL;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleKeepAlive:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleQuery:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleQuery:(id)arg1 session:(id)arg2;
- (void)_handleRequestFiles:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionStart:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionStop:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_sessionInvalidate:(id)arg1;
- (void)_sessionTimerFired;
- (void)_update;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)rootDirectoryURL;
- (id)serviceType;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setRootDirectoryURL:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
