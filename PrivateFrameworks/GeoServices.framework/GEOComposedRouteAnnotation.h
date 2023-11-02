
@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEORouteAnnotation * _annotation;
    GEOLatLng * _derivedPosition;
}

@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) GEOMiniCard *infoCard;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)infoCard;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 annotation:(id)arg4 onRoute:(id)arg5;
- (id)position;

@end
