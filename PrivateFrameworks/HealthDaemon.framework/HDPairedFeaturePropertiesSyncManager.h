
@interface HDPairedFeaturePropertiesSyncManager : NSObject <HDAllowedCountriesDataSource, HDPairedFeatureAttributesProviding, HDRegionAvailabilityProvidingDelegate> {
    id /* block */  _activeRemoteReadSourceProvider;
    <HDAllowedCountriesDataSourceObserver> * _delegate;
    NSString * _featureIdentifier;
    HDLocalCountrySetAvailabilityProvider * _localCountrySetAvailabilityProvider;
    HKFeatureAttributes * _localFeatureAttributes;
    <HDFeaturePropertiesWriting> * _localWriteSource;
    int  _nanoPreferencesSyncChangeNotificationToken;
    id /* block */  _remoteReadSourceForDeviceProvider;
}

@property (nonatomic, readonly, copy) HKCountrySet *activeRemoteCountrySet;
@property (nonatomic, readonly, copy) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDAllowedCountriesDataSourceObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeRemoteCountrySet;
- (id)currentPairedFeatureAttributes;
- (void)dealloc;
- (id)delegate;
- (id)featureIdentifier;
- (id)initWithFeatureIdentifier:(id)arg1 localFeatureAttributes:(id)arg2 localCountrySetAvailabilityProvider:(id)arg3;
- (id)initWithFeatureIdentifier:(id)arg1 localFeatureAttributes:(id)arg2 localCountrySetAvailabilityProvider:(id)arg3 activeRemoteReadSourceProvider:(id /* block */)arg4 remoteReadSourceForDeviceProvider:(id /* block */)arg5 localWriteSource:(id)arg6;
- (id)localCountrySet;
- (id)pairedFeatureAttributesForPairedDevice:(id)arg1;
- (void)regionAvailabilityProvidingDidUpdate:(id)arg1;
- (void)reloadLocalCountrySetWithCompletion:(id /* block */)arg1;
- (id)remoteCountrySetForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)synchronizeLocalProperties;

@end
