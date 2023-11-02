
@interface PKDynamicLayerCrossDissolveConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _intensity;
}

@property (nonatomic) unsigned long long intensity;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)intensity;
- (void)setIntensity:(unsigned long long)arg1;

@end
