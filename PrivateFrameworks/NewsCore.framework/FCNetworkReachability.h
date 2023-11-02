
@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType> {
    bool  _accessRestrictedBecauseOfAppVersion;
    bool  _accessRestrictedBecauseOfCountry;
    bool  _accessRestrictedBecauseOfDeviceAbandoned;
    bool  _accessRestrictedBecauseOfOSVersion;
    long long  _cellularRadioAccessTechnology;
    bool  _isCloudKitAccessAllowed;
    bool  _isLowDataModeEnabled;
    bool  _isNetworkReachable;
    bool  _isNetworkReachableViaCellular;
    bool  _isNetworkReachableViaWiFi;
    bool  _isNetworkUsageExpensive;
    NSHashTable * _observers;
    long long  _offlineReason;
}

@property (nonatomic) bool accessRestrictedBecauseOfAppVersion;
@property (nonatomic) bool accessRestrictedBecauseOfCountry;
@property (nonatomic) bool accessRestrictedBecauseOfDeviceAbandoned;
@property (nonatomic) bool accessRestrictedBecauseOfOSVersion;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCloudKitAccessAllowed;
@property (nonatomic, readonly) bool isCloudKitReachable;
@property (nonatomic) bool isLowDataModeEnabled;
@property (nonatomic, readonly) bool isNetworkOnlyReachableViaCellular;
@property (nonatomic) bool isNetworkReachable;
@property (nonatomic) bool isNetworkReachableViaCellular;
@property (nonatomic) bool isNetworkReachableViaWiFi;
@property (nonatomic) bool isNetworkUsageExpensive;
@property (nonatomic, readonly) bool isNetworkUsageInexpensive;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) long long offlineReason;
@property (nonatomic, readonly) long long reachabilityStatus;
@property (readonly) Class superclass;

+ (id)sharedNetworkReachability;

- (void).cxx_destruct;
- (void)_accessRestrictionsChanged;
- (long long)_cellularRadioAccessTechnology;
- (long long)_cellularRadioAccessTechnologyFromString:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
- (bool)accessRestrictedBecauseOfAppVersion;
- (bool)accessRestrictedBecauseOfCountry;
- (bool)accessRestrictedBecauseOfDeviceAbandoned;
- (bool)accessRestrictedBecauseOfOSVersion;
- (void)addObserver:(id)arg1;
- (long long)cellularRadioAccessTechnology;
- (void)dealloc;
- (id)init;
- (bool)isCloudKitAccessAllowed;
- (bool)isCloudKitReachable;
- (bool)isLowDataModeEnabled;
- (bool)isNetworkOnlyReachableViaCellular;
- (bool)isNetworkReachable;
- (bool)isNetworkReachableViaCellular;
- (bool)isNetworkReachableViaWiFi;
- (bool)isNetworkUsageExpensive;
- (bool)isNetworkUsageInexpensive;
- (id)observers;
- (long long)offlineReason;
- (long long)reachabilityStatus;
- (void)removeObserver:(id)arg1;
- (void)setAccessRestrictedBecauseOfAppVersion:(bool)arg1;
- (void)setAccessRestrictedBecauseOfCountry:(bool)arg1;
- (void)setAccessRestrictedBecauseOfDeviceAbandoned:(bool)arg1;
- (void)setAccessRestrictedBecauseOfOSVersion:(bool)arg1;
- (void)setCellularRadioAccessTechnology:(long long)arg1;
- (void)setIsCloudKitAccessAllowed:(bool)arg1;
- (void)setIsLowDataModeEnabled:(bool)arg1;
- (void)setIsNetworkReachable:(bool)arg1;
- (void)setIsNetworkReachableViaCellular:(bool)arg1;
- (void)setIsNetworkReachableViaWiFi:(bool)arg1;
- (void)setIsNetworkUsageExpensive:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setOfflineReason:(long long)arg1;

@end
