
@interface GEOComposedStringArgument_Timestamp : GEOComposedStringArgument {
    NSString * _defaultFormatPattern;
    NSTimeZone * _defaultTimeZone;
    double  _defaultValue;
    NSString * _overrideFormatPattern;
    NSTimeZone * _overrideTimeZone;
    double  _overrideValue;
}

@property (nonatomic, copy) NSString *overrideFormatPattern;
@property (nonatomic, copy) NSTimeZone *overrideTimeZone;
@property (nonatomic) double overrideValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_initWithGeoTimestampData:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (void)_updateWithGeoTimestampData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideFormatPattern;
- (id)overrideTimeZone;
- (double)overrideValue;
- (void)setOverrideFormatPattern:(id)arg1;
- (void)setOverrideTimeZone:(id)arg1;
- (void)setOverrideValue:(double)arg1;
- (id)timestampFormat;

@end
