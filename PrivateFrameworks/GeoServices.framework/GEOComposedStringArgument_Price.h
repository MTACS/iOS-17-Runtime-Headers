
@interface GEOComposedStringArgument_Price : GEOComposedStringArgument {
    float  _defaultAmount;
    NSString * _defaultCurrencyCode;
    float  _overrideAmount;
    NSString * _overrideCurrencyCode;
}

@property (nonatomic) float overrideAmount;
@property (nonatomic, copy) NSString *overrideCurrencyCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)overrideAmount;
- (id)overrideCurrencyCode;
- (id)priceFormat;
- (void)setOverrideAmount:(float)arg1;
- (void)setOverrideCurrencyCode:(id)arg1;

@end
