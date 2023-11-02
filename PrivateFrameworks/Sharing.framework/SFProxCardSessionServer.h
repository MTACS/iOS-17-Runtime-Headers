
@interface SFProxCardSessionServer : NSObject {
    <SFProxCardXPCServerInterface> * _delegate;
    bool  _dismissCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
    NSXPCListenerEndpoint * _xpcEndpoint;
}

@property (nonatomic, retain) <SFProxCardXPCServerInterface> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSXPCListenerEndpoint *xpcEndpoint;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)performAction:(int)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)xpcEndpoint;

@end
