
@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate> {
    bool  _shouldCollectInternalStats;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldCollectInternalStats;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_getExternalLastConnectedDate;
- (double)_getExternalTotalDuration;
- (id)_getPowerAndWifiDictionaryForKey:(id)arg1;
- (bool)_isOnPower;
- (bool)_isWifiUsable;
- (void)_notePowerDidChangeForInternalCollection:(bool)arg1 isOnWifi:(bool)arg2;
- (void)_noteWifiLinkDidChangeForInternalCollection:(bool)arg1 isOnPower:(bool)arg2;
- (void)_setExternalLastConnectedDate:(id)arg1;
- (void)_setExternalTotalDuration:(id)arg1;
- (bool)_shouldWriteDownPowerWifiChanges;
- (void)clearConnectedToPowerWifiOver20Hours;
- (bool)connectedToPowerAndWifiForOver20Hours;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (void)disconnectedFromAResource_ExternalCollection;
- (id)init;
- (void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (void)reconnectedToBothResources_ExternalCollection;
- (bool)shouldCollectInternalStats;
- (id)todaysKey;
- (void)updateConnectedToPowerWifiIntervalIfConnected;

@end
