
@interface MX_GEOCountryConfigurationObserver : NSObject {
    NSObject<OS_dispatch_queue> * mAccessQueue;
    NSString * mCountryCode;
    GEOCountryConfiguration * mCountryConfiguration;
}

- (void)_updateCountryCodeFromCurrentGeoCountryConfiguration:(id)arg1;
- (void)countryConfigurationDidChange:(id)arg1;
- (void)dealloc;
- (id)getCurrentCountryCode;
- (id)init;

@end
