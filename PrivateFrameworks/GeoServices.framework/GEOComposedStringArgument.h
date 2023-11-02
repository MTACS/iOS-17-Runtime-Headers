
@interface GEOComposedStringArgument : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasDefaultValue;
    bool  _hasOverrideValue;
    NSDictionary * _stringAttributes;
    NSString * _token;
    int  _type;
}

@property (nonatomic, readonly) GEOComposedStringArgument_Artwork *artworkFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Countdown *countdownFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Distance *distanceFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Duration *durationFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Frequency *frequencyFormat;
@property (nonatomic) bool hasDefaultValue;
@property (nonatomic) bool hasOverrideValue;
@property (nonatomic, readonly) GEOComposedStringArgument_Maneuver *maneuverFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Percentage *percentageFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Power *powerFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Price *priceFormat;
@property (nonatomic, copy) NSDictionary *stringAttributes;
@property (nonatomic, readonly) GEOComposedStringArgument_String *stringFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Substitution *substitutionFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_Timestamp *timestampFormat;
@property (nonatomic, readonly) GEOComposedStringArgument_TimestampList *timestampListFormat;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) GEOComposedStringArgument_URL *urlFormat;

+ (id)argumentForGeoFormatArgument:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributedStringReplacementWithOptions:(id)arg1;
- (id)_init;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)artworkFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countdownFormat;
- (id)description;
- (id)distanceFormat;
- (id)durationFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)frequencyFormat;
- (bool)hasDefaultValue;
- (bool)hasOverrideValue;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maneuverFormat;
- (id)percentageFormat;
- (id)powerFormat;
- (id)priceFormat;
- (id)replaceTokenWithOptions:(id)arg1;
- (void)setHasDefaultValue:(bool)arg1;
- (void)setHasOverrideValue:(bool)arg1;
- (void)setStringAttributes:(id)arg1;
- (id)stringAttributes;
- (id)stringFormat;
- (id)substitutionFormat;
- (id)timestampFormat;
- (id)timestampListFormat;
- (id)token;
- (int)type;
- (id)urlFormat;

@end
