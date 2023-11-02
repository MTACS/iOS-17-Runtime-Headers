
@interface TPSGradientStop : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSString * _colorString;
    NSNumber * _location;
}

@property (nonatomic, copy) NSString *colorString;
@property (nonatomic, copy) NSNumber *location;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)setColorString:(id)arg1;
- (void)setLocation:(id)arg1;

@end
