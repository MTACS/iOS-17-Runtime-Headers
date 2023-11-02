
@interface CUPowerSourceMonitor : NSObject {
    bool  _activateCalled;
    NSMutableDictionary * _aggregateSources;
    unsigned int  _changeFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    NSMutableDictionary * _pendingAggregates;
    id /* block */  _powerSourceChangedHandler;
    id /* block */  _powerSourceFoundHandler;
    id /* block */  _powerSourceLostHandler;
    NSMutableDictionary * _powerSources;
    int  _psNotifyTokenAccessoryAttach;
    int  _psNotifyTokenAccessoryPowerSource;
    int  _psNotifyTokenAccessoryTimeRemaining;
    int  _psNotifyTokenAnyPowerSource;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ powerSourceChangedHandler;
@property (nonatomic, copy) id /* block */ powerSourceFoundHandler;
@property (nonatomic, copy) id /* block */ powerSourceLostHandler;

- (void).cxx_destruct;
- (void)_aggregatePowerSourceFound:(id)arg1;
- (void)_aggregatePowerSourceLost:(id)arg1;
- (void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned int)arg2;
- (void)_cleanup;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_update;
- (void)_updatePowerSources;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)powerSourceChangedHandler;
- (id /* block */)powerSourceFoundHandler;
- (id /* block */)powerSourceLostHandler;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPowerSourceChangedHandler:(id /* block */)arg1;
- (void)setPowerSourceFoundHandler:(id /* block */)arg1;
- (void)setPowerSourceLostHandler:(id /* block */)arg1;

@end
