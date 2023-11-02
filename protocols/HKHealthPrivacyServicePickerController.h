
@protocol HKHealthPrivacyServicePickerController <NSObject>

@required

- (NSSet *)allSamples;
- (NSSet *)enabledSamples;
- (NSUUID *)sessionIdentifier;
- (void)setSessionIdentifier:(NSUUID *)arg1;

@end
