
@interface MX_TelephonyClient : NSObject {
    NSObject<OS_dispatch_queue> * mAccessQueue;
    CoreTelephonyClient * mClient;
}

- (id)copyCountryNameFromOperatorCountryBundle;
- (id)copyIsoCountryCodeForMCC;
- (void)dealloc;
- (bool)getIsInHomeCountry;
- (id)init;

@end
