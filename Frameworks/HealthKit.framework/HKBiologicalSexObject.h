
@interface HKBiologicalSexObject : NSObject <NSCopying, NSSecureCoding> {
    long long  _biologicalSex;
}

@property (readonly) long long biologicalSex;

+ (bool)supportsSecureCoding;

- (id)_initWithBiologicalSex:(long long)arg1;
- (long long)biologicalSex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
