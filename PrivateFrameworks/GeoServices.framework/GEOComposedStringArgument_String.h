
@interface GEOComposedStringArgument_String : GEOComposedStringArgument {
    NSString * _defaultValue;
    NSString * _overrideValue;
    int  _privacyFilterType;
    int  _stringSubstituteType;
}

@property (nonatomic, copy) NSString *overrideValue;
@property (nonatomic, readonly) int privacyFilterType;
@property (nonatomic, readonly) int stringSubstituteType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideValue;
- (int)privacyFilterType;
- (void)setOverrideValue:(id)arg1;
- (id)stringFormat;
- (int)stringSubstituteType;

@end
