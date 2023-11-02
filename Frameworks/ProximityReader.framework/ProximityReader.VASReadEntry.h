
@interface ProximityReader.VASReadEntry : NSObject <NSSecureCoding> {
    void customerVASData;
    void merchantIdentifier;
    void mobileToken;
    void resultCode;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
