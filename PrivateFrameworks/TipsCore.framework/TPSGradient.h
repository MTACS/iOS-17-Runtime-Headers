
@interface TPSGradient : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSArray * _stops;
}

@property (nonatomic, copy) NSArray *stops;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorStrings:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStops:(id)arg1;
- (id)stops;

@end
