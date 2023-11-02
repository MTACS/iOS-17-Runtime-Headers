
@interface SystemHealthUI : PSListController {
    CRUIAnalytics * analytics;
    NSObject<OS_dispatch_queue> * asyncQueue;
    bool  deviceFDRVersion1;
    int  failedComponentsCount;
    bool  isRCHLDevice;
    bool  isRepaired;
    CRRepairHistory * localRepairHistory;
    MRLocalization * locale;
    NSMutableArray * untrustedComponents;
}

- (void).cxx_destruct;
- (void)clearCAARequestHistory;
- (void)extractAudioSpecifiers;
- (void)extractBasebandSpecifiers:(id)arg1;
- (void)extractBatterySpecifiers:(id)arg1 caaRepairHistory:(id)arg2 rchlHistory:(id)arg3;
- (void)extractBluetoohSpecifiers;
- (void)extractCameraSpecifiers:(id)arg1 componentsInfoSpecifiers:(id)arg2 caaRepairHistory:(id)arg3 srvp:(id)arg4 rchlHistory:(id)arg5;
- (void)extractDisplaySpecifiers:(id)arg1 caaRepairHistory:(id)arg2 srvp:(id)arg3 rchlHistory:(id)arg4;
- (void)extractFaceIDSpecifiers:(id)arg1 caaRepairHistory:(id)arg2 rchlHistory:(id)arg3;
- (void)extractMtubSpecifiers:(id)arg1 caaRepairHistory:(id)arg2 srvp:(id)arg3 rchlHistory:(id)arg4;
- (void)extractNFCSpecifiers:(id)arg1;
- (void)extractRCameraHWFailureSpecifiers;
- (void)extractUWBSpecifiers:(id)arg1;
- (void)extractWifiSpecifiers;
- (int)getBatteryHealthServiceState;
- (void)getCAAForRepairHistory;
- (long long)getCpuUptimeInSec;
- (id)getCurrentSystemHealthInfoSpecifiers;
- (id)init;
- (bool)isVaildCAA:(id)arg1;
- (void)refreshFailedComponents;
- (void)requestCAA;
- (void)retryCAA;
- (void)scheduleNetworkActivity;
- (void)setupCAARetry:(id)arg1 caaRepairHistory:(id*)arg2;
- (id)setupGroupSpecifer;
- (id)valueForSpecifierPartData:(id)arg1;
- (id)valueForSpecifierPartDate:(id)arg1;
- (id)valueForSpecifierPartIssue:(id)arg1;
- (id)valueForSpecifierPartProperty:(id)arg1;
- (id)valueForSpecifierPartRC:(id)arg1;
- (id)valueForSpecifierPartService:(id)arg1;
- (id)valueForSpecifierRepaired:(id)arg1;
- (id)valueForSpecifierUnknown;

@end
