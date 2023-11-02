
@interface GEOComposedRouteAdvisory : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _advisoryItems;
    NSArray * _analyticsMessageValues;
    GEOPBTransitArtwork * _artwork;
    bool  _initialisedForTransit;
    bool  _isClickable;
    <GEOServerFormattedString> * _title;
    GEOComposedString * _titleString;
}

@property (nonatomic, readonly) NSArray *advisoryItems;
@property (nonatomic, readonly) NSArray *analyticsMessageValues;
@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) bool isClickable;
@property (nonatomic, readonly) <GEOServerFormattedString> *title;
@property (nonatomic, readonly) GEOComposedString *titleString;

+ (id)_fallbackAdvisoryArtwork;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithAdvisoryNotice:(id)arg1 artwork:(id)arg2;
- (id)advisoryItems;
- (id)analyticsMessageValues;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2;
- (id)initWithGeoAdvisoryNotice:(id)arg1 transitIncidents:(id)arg2;
- (bool)isClickable;
- (id)title;
- (id)titleString;

@end
