
@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedString * _composedString;
    <GEOServerFormattedString> * _geoServerString;
    MKServerFormattedStringParameters * _parameters;
}

@property (nonatomic, readonly) GEOComposedString *composedString;
@property (nonatomic, readonly) <GEOServerFormattedString> *geoServerString;
@property (nonatomic, readonly, copy) MKServerFormattedStringParameters *parameters;

+ (id)attributesForServerFormatStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributesByTokenForFormatStyles:(id)arg1;
- (id)_multiPartAttributedStringForComposedStringWithAttributes:(id)arg1;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2;
- (id)_textAttachmentForGeoArtwork:(id)arg1 attributes:(id)arg2 accessibilityText:(id)arg3;
- (id)_textAttachmentForManeuver:(int)arg1 junctionInfo:(id)arg2 defaultAttributes:(id)arg3;
- (id)composedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)geoServerString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedString:(id)arg1;
- (id)initWithGeoServerString:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServerFormattedString:(id)arg1;
- (id)multiPartAttributedStringWithAttributes:(id)arg1;
- (id)parameters;

@end
