
@interface GEOComposedStringArgument_Duration : GEOComposedStringArgument {
    NSMeasurement * _defaultValue;
    NSMeasurement * _overrideValue;
}

@property (nonatomic) double overrideValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)durationFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)overrideValue;
- (void)setOverrideValue:(double)arg1;

@end
