
@protocol HDPeriodicCountryMonitorObserver

@required

- (bool)isEligibleForFetchByPeriodicCountryMonitor:(HDPeriodicCountryMonitor *)arg1;
- (void)periodicCountryMonitor:(HDPeriodicCountryMonitor *)arg1 didFetchISOCountryCode:(NSString *)arg2 countryCodeProvenance:(long long)arg3;

@end
