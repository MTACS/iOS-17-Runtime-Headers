
@interface SFProxCardSessionClient : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, SFProxCardXPCClientInterface> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    <SFProxCardXPCClientInterface> * _delegate;
    bool  _dismissCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    SBSRemoteAlertHandle * _remoteAlertHandle;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSDictionary * _userInfo;
    NSString * _viewControllerClassName;
    NSString * _viewServiceName;
    NSObject<OS_dispatch_source> * _xpcCheckinTimer;
    NSXPCConnection * _xpcCnx;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SFProxCardXPCClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *viewControllerClassName;
@property (nonatomic, copy) NSString *viewServiceName;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)_xpcCheckinTimerFired;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setViewControllerClassName:(id)arg1;
- (void)setViewServiceName:(id)arg1;
- (id)userInfo;
- (id)viewControllerClassName;
- (id)viewServiceName;
- (void)xpcCheckinWithCompletion:(id /* block */)arg1;
- (void)xpcPerformAction:(int)arg1 completion:(id /* block */)arg2;

@end
