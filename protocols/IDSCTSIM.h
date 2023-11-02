
@protocol IDSCTSIM <NSObject>

@required

- (NSString *)SIMIdentifier;
- (bool)isDefaultVoiceSIM;
- (NSString *)label;
- (NSString *)mobileCountryCode;
- (NSString *)mobileNetworkCode;
- (NSString *)phoneNumber;
- (unsigned long long)slot;

@end
