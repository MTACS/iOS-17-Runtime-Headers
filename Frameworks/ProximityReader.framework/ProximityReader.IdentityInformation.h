
@interface ProximityReader.IdentityInformation : NSObject <NSSecureCoding> {
    void age;
    void ageAtLeastElements;
    void issuer;
    void name;
    void portraitData;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
