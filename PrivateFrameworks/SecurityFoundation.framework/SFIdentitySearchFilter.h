
@interface SFIdentitySearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id  _identitySearchFilterInternal;
}

@property (nonatomic, copy) NSArray *certificateSerialNumbers;
@property (nonatomic, copy) NSArray *certificateTypes;
@property (nonatomic, copy) NSArray *keySpecifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateSerialNumbers;
- (id)certificateTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keySpecifiers;
- (void)setCertificateSerialNumbers:(id)arg1;
- (void)setCertificateTypes:(id)arg1;
- (void)setKeySpecifiers:(id)arg1;

@end