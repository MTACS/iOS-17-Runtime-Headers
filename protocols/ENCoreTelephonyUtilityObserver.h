
@protocol ENCoreTelephonyUtilityObserver <NSObject>

@required

- (void)telephonyUtility:(ENCoreTelephonyUtility *)arg1 mobileCountryCodeChanged:(NSString *)arg2 andCountryCodeISO:(NSString *)arg3;

@end
