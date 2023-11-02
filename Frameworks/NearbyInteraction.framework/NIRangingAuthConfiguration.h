
@interface NIRangingAuthConfiguration : NIConfiguration {
    bool  _isResponder;
}

@property (nonatomic, readonly) bool isResponder;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initAsResponder:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isResponder;

@end
