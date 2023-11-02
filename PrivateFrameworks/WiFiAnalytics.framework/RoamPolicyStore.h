
@interface RoamPolicyStore : NSObject {
    bool  _enabled;
    AnalyticsStoreMOHandler * _roamPolicyMOHandler;
}

@property bool enabled;
@property (nonatomic, retain) AnalyticsStoreMOHandler *roamPolicyMOHandler;

+ (id)bandFromChInfo:(id)arg1;
+ (id)cleanChannelFlagsIn:(id)arg1;
+ (id)convertChannelList:(id)arg1 log:(bool)arg2 For:(const char *)arg3;
+ (id)extractChannelList:(id)arg1 channelKeyPath:(id)arg2 channelFlagsKeyPath:(id)arg3 logFor:(const char *)arg4;
+ (id)makeChanInfoFromChannel:(long long)arg1 andFlags:(long long)arg2;
+ (id)neighborChannelsAsArray:(id)arg1 log:(bool)arg2 For:(const char *)arg3;
+ (id)rangeStringWithRssiLevel:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)buildRoamCacheInfoForNetwork:(id)arg1 bssid:(id)arg2 numRoamSamples:(unsigned long long)arg3;
- (bool)buildRoamPoliciesForNetwork:(id)arg1 bssid:(id)arg2 numRoamSamples:(unsigned long long)arg3 deploymentStatus:(bool)arg4;
- (void)checkForFrequentRoams:(unsigned long long)arg1 date:(id)arg2 motionState:(long long)arg3;
- (bool)checkForNewBSSAddition:(id)arg1 bssid:(id)arg2;
- (id)collectRoamCandidates:(id)arg1 roamSamplesToCollect:(unsigned long long)arg2;
- (void)deriveBadRoams:(id)arg1;
- (void)deriveRoamDeltaFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2;
- (id)deriveRoamInfo:(id)arg1 ssid:(id)arg2 numRoamSamplesCollectedSoFar:(unsigned long long)arg3;
- (bool)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)arg1 numRoamSamples:(unsigned long long)arg2;
- (bool)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)arg1 numRoamSamples:(unsigned long long)arg2;
- (bool)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)arg1 numRoamSamples:(unsigned long long)arg2;
- (bool)enabled;
- (void)findDeploymentType:(unsigned long long)arg1;
- (bool)inRange:(long long)arg1 high:(long long)arg2 value:(long long)arg3;
- (id)initWithAnalyticsStore:(id)arg1;
- (bool)isHomeEnvironment:(id)arg1;
- (bool)isNetworkQualifiedForAdaptiveRoaming:(id)arg1;
- (bool)isWorkEnvironment:(id)arg1;
- (void)listOutBTMRoams:(unsigned long long)arg1;
- (void)listOutLazyRoamScanInfo:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3;
- (void)listOutLinkLossSuppressionRoams:(unsigned long long)arg1;
- (void)listOutMostUsedRoamReasons:(unsigned long long)arg1 roamReason:(unsigned long long)arg2;
- (void)listOutMostUsedSourceRssi:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3;
- (void)listOutReassocRoams:(id)arg1 neighborCount:(unsigned long long)arg2 sourceRssi:(long long)arg3;
- (void)listOutTimeSpentOnBss:(unsigned long long)arg1 timeSpentOnBss:(unsigned long long)arg2 motionState:(long long)arg3;
- (void)locateTheNeighbor:(unsigned long long)arg1 cacheRssi:(long long)arg2;
- (bool)monitorDeploymentChanges:(id)arg1 ssid:(id)arg2 roamStatus:(unsigned long long)arg3 originBssid:(id)arg4 targetBssid:(id)arg5;
- (void)predictPath:(id)arg1;
- (void)resetAdaptiveRoamingStateMachine:(id)arg1 bssid:(id)arg2;
- (id)roamPolicyMOHandler;
- (void)setDeploymentFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2;
- (void)setDeploymentFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setRoamPolicyMOHandler:(id)arg1;
- (void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)arg1 neighborCount:(unsigned long long)arg2;
- (void)storeNeighborsInfoLearningsFromRoamInfo:(id)arg1 neighborCount:(unsigned long long)arg2;
- (void)updateNeighborChannelsFromRoamTargetsChannels:(id)arg1 bssid:(id)arg2 ssid:(id)arg3;
- (void)updateNeighborChannelsInCoreDataWith:(id)arg1 bssid:(id)arg2 ssid:(id)arg3;

@end
