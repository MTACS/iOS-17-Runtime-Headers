
@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {
    _GEOCountryConfigurationInfo * _countryCodeInfo;
    bool  _currentCountrySupportsNavigation;
    geo_isolater * _currentCountrySupportsNavigationIsolater;
    bool  _determinedCurrentCountrySupportsNavigation;
    bool  _hasURLAuthenticationTimeToLive;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isUpdating;
    geo_isolater * _isolater;
    <_GEOCountryConfigurationServerProxy> * _serverProxy;
    NSMutableDictionary * _supportedFeatures;
    NSMutableArray * _updateCompletionHandlers;
    double  _urlAuthenticationTimeToLive;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) bool currentCountrySupportsAvoidStairs;
@property (nonatomic, readonly) bool currentCountrySupportsCarIntegration;
@property (nonatomic, readonly) bool currentCountrySupportsCommute;
@property (nonatomic, readonly) bool currentCountrySupportsDirections;
@property (nonatomic, readonly) bool currentCountrySupportsElectricVehicleRouting;
@property (nonatomic, readonly) bool currentCountrySupportsNavigation;
@property (nonatomic, readonly) bool currentCountrySupportsRouteGenius;
@property (nonatomic, readonly) bool currentCountrySupportsTraffic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double urlAuthenticationTimeToLive;
@property (nonatomic, readonly) bool zilchPointsSupported;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(bool)arg1;
+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)countryCode;
- (bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (id)countryCodeWithSource:(unsigned int*)arg1 updatedAtTime:(id*)arg2;
- (bool)currentCountrySupportsAvoidStairs;
- (bool)currentCountrySupportsCarIntegration;
- (bool)currentCountrySupportsCommute;
- (bool)currentCountrySupportsDirections;
- (bool)currentCountrySupportsElectricVehicleRouting;
- (bool)currentCountrySupportsFeature:(long long)arg1;
- (bool)currentCountrySupportsNavigation;
- (bool)currentCountrySupportsRouteGenius;
- (bool)currentCountrySupportsTraffic;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(id /* block */)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 decoder:(id /* block */)arg4;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)updateCountryConfiguration:(id /* block */)arg1;
- (void)updateCountryConfiguration:(id /* block */)arg1 callbackQueue:(id)arg2;
- (void)updateProvidersForCurrentCountry;
- (double)urlAuthenticationTimeToLive;
- (bool)zilchPointsSupported;

@end
