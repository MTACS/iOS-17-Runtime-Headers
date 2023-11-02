
@interface TPSSize : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSNumber * _height;
    NSNumber * _width;
}

@property (nonatomic, copy) NSNumber *height;
@property (nonatomic, copy) NSNumber *width;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)width;

@end
