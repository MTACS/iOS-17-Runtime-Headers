
@interface WiFiAvailabilityEngine : NSObject {
    id /* block */  _availabilityChangedCallback;
    double  _availabilityMatchMaximumAge;
    NSSet * _availableNetworks;
    <WiFiLocationProvider> * _locationProvider;
    NSSet * _providers;
    NSObject<OS_dispatch_queue> * _queue;
    <WiFiScanProvider> * _scanProvider;
    NSSet * _sources;
    WiFiLexicon * _wifiLexicon;
}

@property (nonatomic, copy) id /* block */ availabilityChangedCallback;
@property (nonatomic) double availabilityMatchMaximumAge;
@property (nonatomic, retain) NSSet *availableNetworks;
@property (nonatomic) <WiFiLocationProvider> *locationProvider;
@property (nonatomic, copy) NSSet *providers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <WiFiScanProvider> *scanProvider;
@property (nonatomic, copy) NSSet *sources;
@property (nonatomic, retain) WiFiLexicon *wifiLexicon;

- (void).cxx_destruct;
- (id)_createAvailabilityMatchForCandidate:(id)arg1 scannedNetwork:(id)arg2;
- (void)_findAvailabilityMatchesInSourcesForBSSIDS:(id)arg1;
- (id)_findExistingAvailabilityMatchForScannedNetwork:(id)arg1;
- (id)_findRelevantNetworkMatchForScannedNetwork:(id)arg1;
- (void)_handle3BarsRelevancyAdded:(id)arg1 removed:(id)arg2;
- (void)_handleCandidateMatches:(id)arg1;
- (void)_handleScanResultCallback:(id)arg1 error:(id)arg2;
- (void)_handleWalletRelevancyAdded:(id)arg1 removed:(id)arg2;
- (void)_removeStaleMatches;
- (void)_setupProviderCallbacks:(id)arg1;
- (void)_setupSourceCallbacks:(id)arg1;
- (id /* block */)availabilityChangedCallback;
- (double)availabilityMatchMaximumAge;
- (id)availableNetworks;
- (id)findRecommendationForScannedNetwork:(id)arg1;
- (id)findRecommendationsForScannedNetwork:(id)arg1;
- (id)initWithProviders:(id)arg1 sources:(id)arg2;
- (id)locationProvider;
- (id)providers;
- (id)queue;
- (id)scanProvider;
- (void)setAvailabilityChangedCallback:(id /* block */)arg1;
- (void)setAvailabilityMatchMaximumAge:(double)arg1;
- (void)setAvailableNetworks:(id)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setProviders:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScanProvider:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setWifiLexicon:(id)arg1;
- (id)sources;
- (id)wifiLexicon;

@end
