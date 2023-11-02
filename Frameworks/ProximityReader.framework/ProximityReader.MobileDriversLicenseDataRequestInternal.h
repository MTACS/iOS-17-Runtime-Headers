
@interface ProximityReader.MobileDriversLicenseDataRequestInternal : NSObject <NSSecureCoding> {
    void additionalTrustedIssuerCertificates;
    void hostPreferredLocaleIdentifier;
    void nonRetainedElements;
    void retainedElements;
    void sessionIdentifier;
    void useSystemTrustedIssuerCertificates;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
