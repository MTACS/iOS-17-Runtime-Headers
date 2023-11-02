
@interface GEOComposedStringArgument_URL : GEOComposedStringArgument {
    NSString * _defaultDisplayTitle;
    NSURL * _defaultURL;
    NSString * _linkAttributeName;
    NSString * _overrideDisplayTitle;
    NSURL * _overrideURL;
}

@property (nonatomic, copy) NSString *linkAttributeName;
@property (nonatomic, copy) NSString *overrideDisplayTitle;
@property (nonatomic, copy) NSURL *overrideURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributedStringReplacementWithOptions:(id)arg1;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)linkAttributeName;
- (id)overrideDisplayTitle;
- (id)overrideURL;
- (void)setLinkAttributeName:(id)arg1;
- (void)setOverrideDisplayTitle:(id)arg1;
- (void)setOverrideURL:(id)arg1;
- (id)urlFormat;

@end
