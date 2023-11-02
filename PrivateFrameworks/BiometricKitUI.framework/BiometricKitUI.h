
@interface BiometricKitUI : NSObject {
    bool  _triggeredfromApplePay;
}

+ (id)sharedInstance;

- (id)getEnrollUIViewController:(int)arg1 bundleName:(id)arg2;
- (void)invalidateApplePayTrigger;
- (void)setTriggeredFromApplePay;
- (bool)triggeredFromApplePay;

@end
