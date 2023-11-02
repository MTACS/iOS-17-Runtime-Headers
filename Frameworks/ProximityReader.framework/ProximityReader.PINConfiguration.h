
@interface ProximityReader.PINConfiguration : NSObject <NSSecureCoding> {
    void allowPINBypass;
    void amount;
    void cardPreferredLanguage;
    void countryCode;
    void currencyCode;
    void customerPreferredLocaleIdentifier;
    void digest;
    void merchantName;
    void privacyLock;
    void terminalPreferredLocaleIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
