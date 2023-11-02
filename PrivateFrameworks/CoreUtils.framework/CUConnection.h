
@interface CUConnection : NSObject <CUMessageable> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    CUEndpoint * _peerEndpoint;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) CUEndpoint *peerEndpoint;

- (void).cxx_destruct;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)peerEndpoint;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerEndpoint:(id)arg1;

@end
