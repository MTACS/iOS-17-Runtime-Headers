
@interface AKCarrierBundleUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _carrierUtilitiesQueue;
    CoreTelephonyClient * _telephonyClient;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)init;
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id*)arg2;

@end
