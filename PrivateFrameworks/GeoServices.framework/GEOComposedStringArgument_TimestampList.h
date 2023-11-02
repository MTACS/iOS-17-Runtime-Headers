
@interface GEOComposedStringArgument_TimestampList : GEOComposedStringArgument {
    NSArray * _defaultTimestamps;
    NSArray * _overrideTimestamps;
}

@property (nonatomic, retain) NSArray *overrideTimestamps;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideTimestamps;
- (void)setOverrideTimestamps:(id)arg1;
- (id)timestampListFormat;

@end
