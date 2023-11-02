
@interface ProximityReader.PINData : NSObject <NSSecureCoding> {
    void casdCertificateHex;
    void isPINBypass;
    void pinBlockBase64;
    void pinKekId;
    void seAttestationBase64;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
