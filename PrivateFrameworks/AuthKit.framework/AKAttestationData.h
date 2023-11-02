
@interface AKAttestationData : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attestationHeaders;
}

@property (nonatomic, copy) NSDictionary *attestationHeaders;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestationHeaders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setAttestationHeaders:(id)arg1;

@end
