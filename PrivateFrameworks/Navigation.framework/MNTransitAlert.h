
@interface MNTransitAlert : NSObject <NSSecureCoding> {
    GEOTransitBanner * _banner;
    MNActiveRouteInfo * _currentRouteInfo;
    int  _maneuverType;
    GEOComposedString * _primaryString;
    GEOComposedString * _secondaryString;
    unsigned long long  _stepIndex;
    unsigned long long  _stopIndex;
}

@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) <GEOServerFormattedString> *command;
@property (nonatomic, readonly) MNActiveRouteInfo *currentRouteInfo;
@property (nonatomic, readonly) <GEOServerFormattedString> *detail;
@property (nonatomic, readonly) int maneuverType;
@property (nonatomic, readonly) GEOComposedString *primaryString;
@property (nonatomic, readonly) GEOComposedString *secondaryString;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) unsigned long long stopIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)command;
- (id)currentRouteInfo;
- (id)description;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitBanner:(id)arg1 transitStep:(id)arg2 activeRoute:(id)arg3;
- (int)maneuverType;
- (id)primaryString;
- (id)secondaryString;
- (unsigned long long)stepIndex;
- (unsigned long long)stopIndex;

@end
