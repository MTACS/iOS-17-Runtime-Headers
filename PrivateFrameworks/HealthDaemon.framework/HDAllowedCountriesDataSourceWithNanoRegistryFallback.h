
@interface HDAllowedCountriesDataSourceWithNanoRegistryFallback : NSObject <HDAllowedCountriesDataSource> {
    <HDAllowedCountriesDataSource> * _allowedCountriesDataSource;
    NSString * _devicePropertyName;
    NSObject<OS_os_log> * _loggingCategory;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceCapabilityProvider;
    bool  _shouldReturnLocalAvailabilityForNilDeviceRegions;
}

@property (nonatomic, readonly, copy) HKCountrySet *activeRemoteCountrySet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDAllowedCountriesDataSourceObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeRemoteCountrySet;
- (id)delegate;
- (id)featureIdentifier;
- (id)initWithDaemon:(id)arg1 allowedCountriesDataSource:(id)arg2 availableRegionsDevicePropertyName:(id)arg3 loggingCategory:(id)arg4 shouldReturnLocalAvailabilityForNilDeviceRegions:(bool)arg5;
- (id)localCountrySet;
- (void)reloadLocalCountrySetWithCompletion:(id /* block */)arg1;
- (id)remoteCountrySetForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
