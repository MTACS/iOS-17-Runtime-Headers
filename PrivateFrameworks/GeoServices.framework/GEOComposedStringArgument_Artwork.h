
@interface GEOComposedStringArgument_Artwork : GEOComposedStringArgument {
    GEOPBTransitArtwork * _artwork;
    id /* block */  _attributedStringHandler;
    NSString * _fallbackStringValue;
}

@property (nonatomic, copy) id /* block */ attributedStringHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributedStringReplacementWithOptions:(id)arg1;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)artworkFormat;
- (id /* block */)attributedStringHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAttributedStringHandler:(id /* block */)arg1;

@end
