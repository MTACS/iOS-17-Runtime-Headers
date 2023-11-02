
@interface CURangingSession : NSObject <PRSharingSessionDelegate> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    unsigned int  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    id /* block */  _measurementHandler;
    id /* block */  _measurementHandlerEx;
    NSArray * _peers;
    bool  _peersChanged;
    NSArray * _peersRanging;
    int  _prRangingInitiated;
    PRSharingSession * _prRangingSession;
    PRContactAllowlist * _prResponder;
    id /* block */  _statusChangedHandler;
    unsigned int  _statusFlags;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id /* block */ measurementHandler;
@property (nonatomic, copy) id /* block */ measurementHandlerEx;
@property (nonatomic, copy) NSArray *peers;
@property (nonatomic, copy) id /* block */ statusChangedHandler;
@property (nonatomic, readonly) unsigned int statusFlags;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)_update;
- (void)_updateInitiator;
- (void)_updatePeers;
- (void)_updateResponder;
- (void)activate;
- (void)addSample:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (unsigned int)flags;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id /* block */)measurementHandler;
- (id /* block */)measurementHandlerEx;
- (id)peers;
- (void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;
- (void)session:(id)arg1 didEstimateScores:(id)arg2;
- (void)session:(id)arg1 didFailwithError:(id)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMeasurementHandler:(id /* block */)arg1;
- (void)setMeasurementHandlerEx:(id /* block */)arg1;
- (void)setPeers:(id)arg1;
- (void)setStatusChangedHandler:(id /* block */)arg1;
- (id /* block */)statusChangedHandler;
- (unsigned int)statusFlags;

@end
