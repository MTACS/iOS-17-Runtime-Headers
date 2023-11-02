
@interface GEOComposedRouteAdvisoryItem : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _analyticsMessageValues;
    GEOPBTransitArtwork * _artwork;
    <GEOServerFormattedString> * _attribution;
    GEOComposedString * _attributionString;
    GEOAdvisoryCardAction * _cardAction;
    NSDate * _dateOfLastUpdate;
    <GEOServerFormattedString> * _dateOfLastUpdateDescription;
    GEOComposedString * _dateOfLastUpdateString;
    NSArray * _details;
    bool  _isNonTransitIncident;
    <GEOServerFormattedString> * _subtitle;
    GEOComposedString * _subtitleString;
    <GEOServerFormattedString> * _title;
    GEOComposedString * _titleString;
}

@property (nonatomic, readonly) NSArray *analyticsMessageValues;
@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) <GEOServerFormattedString> *attribution;
@property (nonatomic, readonly) GEOComposedString *attributionString;
@property (nonatomic, readonly) GEOAdvisoryCardAction *cardAction;
@property (nonatomic, readonly) NSDate *dateOfLastUpdate;
@property (nonatomic, readonly) <GEOServerFormattedString> *dateOfLastUpdateDescription;
@property (nonatomic, readonly) GEOComposedString *dateOfLastUpdateString;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, readonly) bool isNonTransitIncident;
@property (nonatomic, readonly) <GEOServerFormattedString> *subtitle;
@property (nonatomic, readonly) GEOComposedString *subtitleString;
@property (nonatomic, readonly) <GEOServerFormattedString> *title;
@property (nonatomic, readonly) GEOComposedString *titleString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_detailsForIncident:(id)arg1;
- (id)analyticsMessageValues;
- (id)artwork;
- (id)attribution;
- (id)attributionString;
- (id)cardAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfLastUpdate;
- (id)dateOfLastUpdateDescription;
- (id)dateOfLastUpdateString;
- (id)description;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvisoryItem:(id)arg1 routeIncidents:(id)arg2 fallbackIcon:(id)arg3;
- (id)initWithAdvisoryItem:(id)arg1 transitIncidents:(id)arg2 fallbackIcon:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isNonTransitIncident;
- (id)subtitle;
- (id)subtitleString;
- (id)title;
- (id)titleString;

@end
