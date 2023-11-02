
@interface PCMediaTransferObserver : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    id /* block */  _transferBeganHandler;
    id /* block */  _transferEndedHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ transferBeganHandler;
@property (nonatomic, copy) id /* block */ transferEndedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_interrupted;
- (void)_invalidateWithError:(id)arg1;
- (void)_xpcEnsureStarted;
- (void)_xpcEnsureStopped;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTransferBeganHandler:(id /* block */)arg1;
- (void)setTransferEndedHandler:(id /* block */)arg1;
- (id /* block */)transferBeganHandler;
- (void)transferBeganWithContext:(id)arg1;
- (void)transferEnded;
- (id /* block */)transferEndedHandler;

@end
