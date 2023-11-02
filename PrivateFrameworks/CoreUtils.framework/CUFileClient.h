
@interface CUFileClient : NSObject <CUActivatable> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    bool  _clinkActivated;
    RPCompanionLinkClient * _clinkClient;
    CUFileQuery * _currentQuery;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned long long  _lastRequestTicks;
    NSMutableArray * _queryArray;
    NSString * _serviceType;
    NSNumber * _sessionID;
    NSObject<OS_dispatch_source> * _sessionTimer;
    int  _state;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) NSString *destinationID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_completeQuery:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_invalidate;
- (void)_invalidated;
- (void)_reportError:(id)arg1 where:(const char *)arg2;
- (void)_run;
- (void)_runCLinkActivate;
- (void)_runPrepare;
- (void)_runQueries;
- (void)_runQueryResponse:(id)arg1 query:(id)arg2 error:(id)arg3;
- (void)_runSendQuery:(id)arg1;
- (void)_runSessionStartRequest;
- (void)_runSessionStartResponse:(id)arg1 error:(id)arg2;
- (void)_sendKeepAlive:(double)arg1;
- (void)_sendSessionStop;
- (void)_sessionTimerFired;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)destinationID;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)performQuery:(id)arg1;
- (id)serviceType;
- (void)setDestinationID:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
