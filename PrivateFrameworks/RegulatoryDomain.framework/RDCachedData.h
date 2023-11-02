
@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _combinedEstimate;
    NSArray * _countriesFromLocation;
    NSArray * _countriesFromNearbyCells;
    NSArray * _countriesFromServingCell;
    NSArray * _countriesFromWiFiAPs;
    NSArray * _lastKnownCombinedEstimate;
    NSArray * _localOnlyEstimates;
    NSMutableDictionary * _peerDeviceLocalEstimates;
}

+ (void)createCacheAtPath:(id)arg1;
+ (void)createCacheDirectoryIfNeeded:(bool)arg1;
+ (id)getCacheDirPath;
+ (id)getCacheDirPathForUnitTest;
+ (id)getCacheDirPathLegacy;
+ (id)getUserPath:(id)arg1;
+ (id)loadCache;
+ (id)loadCache:(bool)arg1;
+ (id)loadCacheForUnitTest;
+ (bool)sameCountryCodesInArrays:(id)arg1 arr2:(id)arg2;
+ (id)sortPreferredOrder:(id)arg1;
+ (id)stringsFromRDEstimateArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)computeLocalCountryCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCodesForPriority:(unsigned int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCombinedEstimate;
- (id)getEstimateForPeerDeviceWithID:(id)arg1;
- (id)getLastKnownCombinedEstimate;
- (id)getLocalOnlyEstimates;
- (id)initWithCoder:(id)arg1;
- (id)initWithCountryCodeFromLocation:(id)arg1 fromServingCell:(id)arg2 fromNearbyCell:(id)arg3 fromWiFi:(id)arg4 localEstimates:(id)arg5 combinedEstimate:(id)arg6 lastKnownCombinedEstimate:(id)arg7 peerEstimates:(id)arg8;
- (void)recompute;
- (void)recompute:(bool)arg1;
- (void)removeEstimateForPeerDeviceWithID:(id)arg1;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)arg1;
- (bool)saveCache;
- (bool)saveCache:(bool)arg1;
- (bool)saveCacheForUnitTest;
- (void)setCountriesFromLocation:(id)arg1;
- (void)setCountriesFromLocation:(id)arg1 forUnitTest:(bool)arg2;
- (void)setCountriesFromLocationForUnitTest:(id)arg1;
- (void)setCountriesFromNearbyCells:(id)arg1;
- (void)setCountriesFromNearbyCells:(id)arg1 forUnitTest:(bool)arg2;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)arg1;
- (void)setCountriesFromServingCell:(id)arg1;
- (void)setCountriesFromServingCell:(id)arg1 forUnitTest:(bool)arg2;
- (void)setCountriesFromServingCellForUnitTest:(id)arg1;
- (void)setCountriesFromWiFiAPs:(id)arg1;
- (void)setCountriesFromWiFiAPs:(id)arg1 forUnitTest:(bool)arg2;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)arg1;
- (void)setCountryFromLocation:(id)arg1;
- (void)setCountryFromMCC:(id)arg1;
- (void)setCountryFromWiFiAPs:(id)arg1;
- (void)setEstimate:(id)arg1 forPeerDeviceWithID:(id)arg2;
- (void)setEstimateForUnitTest:(id)arg1 forPeerDeviceWithID:(id)arg2;

@end
