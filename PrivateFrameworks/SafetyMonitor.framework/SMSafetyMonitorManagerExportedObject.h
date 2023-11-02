
@interface SMSafetyMonitorManagerExportedObject : NSObject <SMFrameworkProtocol> {
    SMSafetyMonitorManager * _safetyMonitorManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SMSafetyMonitorManager *safetyMonitorManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSafetyMonitorManager:(id)arg1;
- (void)onInitiatorSafetyCacheChangeForSessionID:(id)arg1 phoneCache:(id)arg2 watchCache:(id)arg3 cacheExpiryDate:(id)arg4 cacheReleaseDate:(id)arg5;
- (void)onReceiverSafetyCacheChangeForSessionID:(id)arg1 phoneCache:(id)arg2 watchCache:(id)arg3;
- (void)onReceiverSessionStatusChangeForSessionID:(id)arg1 sessionStatus:(id)arg2;
- (void)onSessionStateChanged:(id)arg1 forActiveDevice:(bool)arg2 withError:(id)arg3;
- (id)safetyMonitorManager;
- (void)setSafetyMonitorManager:(id)arg1;

@end
