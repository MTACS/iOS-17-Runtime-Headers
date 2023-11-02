
@protocol BYCapabilities <NSObject>

@required

- (bool)canShowAppleIDScreen;
- (bool)canShowFaceIDScreen;
- (bool)canShowPasscodeScreen;
- (bool)canShowPaymentScreen;
- (bool)canShowSiriScreen;
- (bool)canShowTouchIDScreen;
- (bool)hasEligibleEnrolledIdentityForPeriocularFaceIDEnrollment;
- (bool)isCloudAnalyticsRestricted;
- (bool)isDeviceAnalyticsRestricted;
- (bool)isPearlEnrolled;
- (bool)isScreenTimeRestricted;
- (bool)isSiriRestricted;
- (bool)isTouchIDEnrolled;
- (bool)mgHasCellularData;
- (bool)mgHasCellularTelephony;
- (bool)mgHasGreenTea;
- (bool)mgHasMesa;
- (bool)mgHasSecureElement;
- (bool)mgHasSiriCapability;
- (bool)mgSupportsSingleDisplayEnhancedMultitasking;
- (bool)supportsApplePay;
- (bool)supportsAppleWatch;
- (bool)supportsKappaDetection;
- (bool)supportsPearl;
- (bool)supportsPeriocularFaceID;
- (bool)supportsTouchID;

@end
