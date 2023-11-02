
@interface GEOComposedStringArgument_Countdown : GEOComposedStringArgument {
    NSDictionary * _countdownFormatStrings;
    NSTimeZone * _defaultTimeZone;
    NSDate * _overrideReferenceDate;
    bool  _rightToLeft;
    NSString * _separator;
    NSArray * _timestampValues;
}

@property (nonatomic, retain) NSDate *overrideReferenceDate;
@property (nonatomic) bool rightToLeft;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countdownFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideReferenceDate;
- (bool)rightToLeft;
- (void)setOverrideReferenceDate:(id)arg1;
- (void)setRightToLeft:(bool)arg1;

@end
