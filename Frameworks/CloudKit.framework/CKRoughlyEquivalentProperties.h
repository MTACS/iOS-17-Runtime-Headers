
@interface CKRoughlyEquivalentProperties : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
