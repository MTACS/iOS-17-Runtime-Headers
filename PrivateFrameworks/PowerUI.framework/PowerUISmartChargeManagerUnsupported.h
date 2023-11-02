
@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)manager;

- (void).cxx_destruct;
- (void)client:(id)arg1 setMCMState:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)enterDevelopmentMode;
- (void)forceModelUpdate;
- (void)fullChargeDeadlineWithHandler:(id /* block */)arg1;
- (id)init;
- (void)isCECSupportedWithHandler:(id /* block */)arg1;
- (void)isMCMCurrentlyEnabledWithHandler:(id /* block */)arg1;
- (void)isOBCSupportedWithHandler:(id /* block */)arg1;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)arg1;
- (void)legacy_isOBCEngagedWithHandler:(id /* block */)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)powerLogStatusWithHandler:(id /* block */)arg1;
- (void)resetDevelopmentMode;
- (void)setListener:(id)arg1;
- (void)shouldMCMBeDisplayedWithHandler:(id /* block */)arg1;
- (void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)smartChargingUIStateWithHandler:(id /* block */)arg1;
- (void)statusWithHandler:(id /* block */)arg1;

@end
