
@interface WADeviceAnalyticsClient : NSObject {
    AnalyticsStoreFileWriter * _analyticsFileWriter;
    AnalyticsReader * _analyticsReader;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AnalyticsStoreMOHandler * _managedObjectHandler;
}

@property (nonatomic, retain) AnalyticsStoreFileWriter *analyticsFileWriter;
@property (nonatomic, retain) AnalyticsReader *analyticsReader;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) AnalyticsStoreMOHandler *managedObjectHandler;

- (void).cxx_destruct;
- (id)analyticsFileWriter;
- (id)analyticsReader;
- (long long)autoLeaveRssiForBSS:(id)arg1 ssid:(id)arg2;
- (id)copyAllStoredNetworkSsids;
- (id)copyAllStoredNetworkSsidsWithColocatedScopeId:(id)arg1;
- (id)copyAllStoredNetworkSsidsWithTrait:(unsigned long long)arg1;
- (id)copyColocatedScopeIdForSsid:(id)arg1;
- (id)copyColocatedScopeTransitionInfo:(id)arg1 bssid:(id)arg2 minRssi:(int)arg3 maxRssi:(int)arg4 band:(unsigned int)arg5;
- (id)copyGeoTagsForNetwork:(id)arg1 location:(id)arg2;
- (id)copyLocationsForNetwork:(id)arg1;
- (id)copyNetworkUsageDictionary:(id)arg1;
- (id)copyNetworksAvailableAtLocationWithinDistanceInBand:(id)arg1 distance:(double)arg2 band:(unsigned int)arg3;
- (id)copyNetworksUsageDictionaryForMostUsedNetworks:(unsigned long long)arg1 ascending:(bool)arg2;
- (id)copyPreferenceScoreDictionaryForNetwork:(id)arg1;
- (id)copyScoreSortedNetworksAvailableAtLocationWithinDistance:(id)arg1 distance:(double)arg2 authComparator:(id /* block */)arg3;
- (void)dealloc;
- (id)dispatchQueue;
- (bool)dumpDeploymentGraphJSONFileWithCompletion:(id /* block */)arg1;
- (bool)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)arg1;
- (bool)dumpDeviceAnalyticsToFileWithCompletion:(id /* block */)arg1 fetchLimit:(unsigned long long)arg2 maxAge:(unsigned long long)arg3;
- (bool)dumpDeviceAnalyticsUsingBatchSizeToFileWithCompletion:(id /* block */)arg1 batchSize:(unsigned long long)arg2 maxAge:(unsigned long long)arg3;
- (id)init;
- (bool)isHistoricallyBadLinkQualityNetwork:(id)arg1;
- (bool)isMovingNetwork:(id)arg1;
- (unsigned long long)isNetworkWithinRangeOfLocation:(id)arg1 range:(double)arg2 location:(id)arg3;
- (bool)isOmnipresentNetwork:(id)arg1;
- (id)managedObjectHandler;
- (unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2;
- (id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2;
- (id)neighborsForBSS:(id)arg1 ssid:(id)arg2;
- (bool)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2;
- (long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2;
- (void)setAnalyticsFileWriter:(id)arg1;
- (void)setAnalyticsReader:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setManagedObjectHandler:(id)arg1;

@end
