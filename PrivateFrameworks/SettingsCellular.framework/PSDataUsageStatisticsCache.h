
@interface PSDataUsageStatisticsCache : NSObject <CoreTelephonyClientAppDataUsageDelegate, CoreTelephonyClientRegistrationDelegate> {
    bool  _cacheNeedsRefresh;
    CTDeviceDataUsage * _cachedDeviceDataUsage;
    CoreTelephonyClient * _client;
    NSDictionary * _hotspotClientsUsage;
    id /* block */  _refreshCompletionHandler;
    bool  _refreshInProgress;
    CTCellularUsageWorkspaceInfo * _workspaceInfo;
}

@property bool cacheNeedsRefresh;
@property (retain) CTDeviceDataUsage *cachedDeviceDataUsage;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *hotspotClientsUsage;
@property (copy) id /* block */ refreshCompletionHandler;
@property bool refreshInProgress;
@property (readonly) Class superclass;
@property (retain) CTCellularUsageWorkspaceInfo *workspaceInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCache;
- (void)_handleUsageOrInfoChanged;
- (id)billingCycleEndDate;
- (bool)billingCycleSupported;
- (id)bundleIDsForAppType:(unsigned long long)arg1;
- (bool)cacheNeedsRefresh;
- (id)cachedDeviceDataUsage;
- (id)client;
- (void)dataRatesChanged;
- (void)dealloc;
- (id)displayNameForHotspotClientID:(id)arg1;
- (id)displayNamesForBundleIDs:(id)arg1 appType:(unsigned long long)arg2;
- (void)fetchDeviceDataUsage;
- (void)fetchDeviceDataUsageWithCompletion:(id /* block */)arg1;
- (void)fetchHotspotClientsUsage;
- (void)fetchWorkspaceInfo;
- (id)getLogger;
- (id)hotspotClientIDsForPeriod:(unsigned long long)arg1;
- (id)hotspotClientsUsage;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1;
- (id)previousBillingCycleEndDate;
- (void)refreshCacheIfNeeded;
- (id /* block */)refreshCompletionHandler;
- (void)refreshDataUsageUINotification;
- (bool)refreshInProgress;
- (void)setCacheNeedsRefresh:(bool)arg1;
- (void)setCachedDeviceDataUsage:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setHotspotClientsUsage:(id)arg1;
- (void)setRefreshCompletionHandler:(id /* block */)arg1;
- (void)setRefreshInProgress:(bool)arg1;
- (void)setWorkspaceInfo:(id)arg1;
- (unsigned long long)totalCellularUsageForPeriod:(unsigned long long)arg1;
- (unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)arg1;
- (unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)arg1;
- (id)totalSystemServicesUsageForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppUsageForPeriod:(unsigned long long)arg1;
- (id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)arg1;
- (id)usageForBundleID:(id)arg1 inPeriod:(unsigned long long)arg2;
- (unsigned long long)usageForHotspotClientID:(id)arg1 inPeriod:(unsigned long long)arg2;
- (bool)useCalendarMonthBillingCycle;
- (id)wifiAssistUsageForPeriod:(unsigned long long)arg1;
- (void)willEnterForeground;
- (id)workspaceInfo;

@end
