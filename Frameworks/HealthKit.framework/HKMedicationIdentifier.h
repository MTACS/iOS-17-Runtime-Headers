
@interface HKMedicationIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _underlyingIdentifier;
}

@property (nonatomic, readonly, copy) NSString *underlyingIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawIdentifier:(id)arg1;
- (id)initWithSemanticIdentifierString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)underlyingIdentifier;

@end
