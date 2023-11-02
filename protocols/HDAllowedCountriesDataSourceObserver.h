
@protocol HDAllowedCountriesDataSourceObserver

@required

- (void)allowedCountriesDataSourceDidUpdateActiveRemoteCountrySet:(id <HDAllowedCountriesDataSource>)arg1;
- (void)allowedCountriesDataSourceDidUpdateLocalCountrySet:(id <HDAllowedCountriesDataSource>)arg1;

@end
