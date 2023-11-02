
@interface AnalyticsReader : NSObject {
    NSManagedObjectContext * _backgroundReadingMOC;
    AnalyticsStoreMOHandler * _managedObjectHandler;
}

@property (nonatomic, readonly) NSManagedObjectContext *backgroundReadingMOC;
@property (nonatomic, retain) AnalyticsStoreMOHandler *managedObjectHandler;

- (void).cxx_destruct;
- (id)_copyNetworkUsageDictionaryWithMOC:(id)arg1 moc:(id)arg2;
- (long long)autoLeaveRssiForBss:(id)arg1 ssid:(id)arg2;
- (id)backgroundReadingMOC;
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
- (id)initWithAnalyticsStore:(id)arg1;
- (bool)isHistoricallyBadLinkQualityNetwork:(id)arg1;
- (bool)isMovingNetwork:(id)arg1;
- (bool)isNetworkWithinRangeOfLocation:(id)arg1 range:(double)arg2 location:(id)arg3 count:(unsigned long long*)arg4;
- (bool)isOmnipresentNetwork:(id)arg1;
- (id)managedObjectHandler;
- (unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2;
- (id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2;
- (id)neighborsForBSS:(id)arg1 ssid:(id)arg2;
- (bool)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2;
- (long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2;
- (void)setManagedObjectHandler:(id)arg1;

@end
