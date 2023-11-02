
@interface HKRegulatoryDomainManager : NSObject <HKRegulatoryDomainProvider> {
    id /* block */  _currentEstimatesProvider;
}

+ (bool)isOverridePresent;
+ (id)overrideISOCountryCode;
+ (id)registerForUpdatesWithBlock:(id /* block */)arg1 queue:(id)arg2;
+ (void)setOverrideISOCountryCode:(id)arg1;
+ (bool)unregisterForUpdatesWithToken:(id)arg1;

- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)currentEstimate;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCurrentEstimatesProvider:(id /* block */)arg1;

@end
