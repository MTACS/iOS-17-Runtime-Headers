
@interface CPMSAgent : NSObject <CPMSAgentProtocol> {
    NSMutableSet * _clientSet;
    unsigned int  _connect;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned int  _ppmService;
    NSSet * _timeScalesSet;
}

@property (retain) NSMutableSet *clientSet;
@property unsigned int connect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned char)CPMSClientIdToPPMClientId:(long long)arg1;
+ (bool)isCPMSSupported;
+ (bool)isCPMSSupportedForAnyClient;
+ (bool)isCPMSSupportedForClient:(long long)arg1;
+ (id)log;
+ (id)sharedCPMSAgent;

- (void).cxx_destruct;
- (BOOL)CPMSPowerTimeScaleToPPMIndex:(id)arg1;
- (id)PPMIndexToCPMSPowerTimeScale:(BOOL)arg1;
- (bool)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3;
- (id)clientSet;
- (unsigned int)connect;
- (id)copyDefaultPowerProfileForClient:(long long)arg1 error:(id*)arg2;
- (id)copyPowerBudgetForRequest:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;
- (id)copyPowerBudgetForRequest:(id)arg1 forClient:(long long)arg2 withPowerProfile:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)init;
- (bool)isClientIdValid:(long long)arg1;
- (bool)registerClientWithDescription:(id)arg1 error:(id*)arg2;
- (bool)registerForNotifications;
- (id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;
- (bool)sanityCheckClientDescription:(id)arg1;
- (void)setClientSet:(id)arg1;
- (void)setConnect:(unsigned int)arg1;

@end
