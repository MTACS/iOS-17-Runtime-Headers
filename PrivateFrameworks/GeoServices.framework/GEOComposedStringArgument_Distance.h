
@interface GEOComposedStringArgument_Distance : GEOComposedStringArgument {
    bool  _allowUnitConversion;
    NSMeasurement * _defaultValue;
    unsigned long long  _formatOptions;
    NSMeasurement * _overrideValue;
}

@property (nonatomic) unsigned long long formatOptions;
@property (nonatomic, retain) NSMeasurement *overrideValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)distanceFormat;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)formatOptions;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideValue;
- (void)setFormatOptions:(unsigned long long)arg1;
- (void)setOverrideValue:(id)arg1;

@end
