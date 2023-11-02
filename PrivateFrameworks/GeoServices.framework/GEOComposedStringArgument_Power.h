
@interface GEOComposedStringArgument_Power : GEOComposedStringArgument {
    float  _defaultValue;
    float  _overrideValue;
}

@property (nonatomic) float overrideValue;

+ (bool)supportsSecureCoding;

- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)overrideValue;
- (id)powerFormat;
- (void)setOverrideValue:(float)arg1;

@end
