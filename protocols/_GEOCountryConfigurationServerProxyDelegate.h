
@protocol _GEOCountryConfigurationServerProxyDelegate <NSObject>

@required

- (void)serverProxy:(id <_GEOCountryConfigurationServerProxy>)arg1 countryCodeDidChange:(_GEOCountryConfigurationInfo *)arg2;
- (void)serverProxyProvidersDidChange:(id <_GEOCountryConfigurationServerProxy>)arg1;

@end
