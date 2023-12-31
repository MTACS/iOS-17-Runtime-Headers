
@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _dictionary;
    bool  _supportsLegacyFormats;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic) bool supportsLegacyFormats;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateOfType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2;
- (void)setSupportsLegacyFormats:(bool)arg1;
- (bool)supportsLegacyFormats;

@end
