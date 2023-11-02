
@interface HKMobileCountryCodeManager : NSObject <HKRegulatoryDomainProvider> {
    CoreTelephonyClient * _coreTelephonyClient;
    struct __CTServerConnection { } * _coreTelephonyServerConnection;
    RadiosPreferences * _radiosPreferences;
}

+ (id)_overrideISOCountryCode;
+ (bool)isOverridePresent;
+ (id)overrideMobileCountryCode;
+ (void)setOverrideMobileCountryCode:(id)arg1;

- (void).cxx_destruct;
- (bool)_isLocationAvailableWithError:(id*)arg1;
- (void)_submitAnalyticsForError:(id)arg1 mobileCountryCode:(id)arg2;
- (id)_wrapperWithMobileCountryCode:(id)arg1 error:(id*)arg2;
- (id)copyISOCountryCodeForMobileCountryCode:(id)arg1 error:(id*)arg2;
- (id)currentCountryCode;
- (id)currentEstimate;
- (void)dealloc;
- (void)fetchISOCountryCodeFromCellularWithCompletion:(id /* block */)arg1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)mobileCountryCodeFromCellularWithError:(id*)arg1;

@end
