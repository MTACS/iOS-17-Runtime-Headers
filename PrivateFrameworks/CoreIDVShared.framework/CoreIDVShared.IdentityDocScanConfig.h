
@interface CoreIDVShared.IdentityDocScanConfig : NSObject <NSSecureCoding> {
    void crTimeout;
    void issuerIdentificationNumber;
    void maxRetakeCount;
    void pdf417ParsingConfigs;
    void requiresAAMVACompliant;
    void requiresPDF417;
    void requiresStateMatch;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
