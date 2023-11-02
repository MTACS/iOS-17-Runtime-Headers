
@protocol HDAllowedCountriesDataSource <NSObject>

@required

- (HKCountrySet *)activeRemoteCountrySet;
- (<HDAllowedCountriesDataSourceObserver> *)delegate;
- (NSString *)featureIdentifier;
- (HKCountrySet *)localCountrySet;
- (void)reloadLocalCountrySetWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (HKCountrySet *)remoteCountrySetForDevice:(NRDevice *)arg1;
- (void)setDelegate:(id <HDAllowedCountriesDataSourceObserver>)arg1;

@end
