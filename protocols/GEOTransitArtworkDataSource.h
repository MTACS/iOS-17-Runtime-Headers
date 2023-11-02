
@protocol GEOTransitArtworkDataSource <NSObject>

@required

- (NSString *)accessibilityText;
- (int)artworkSourceType;
- (int)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (<GEOTransitIconDataSource> *)iconDataSource;
- (<GEOTransitShieldDataSource> *)iconFallbackShieldDataSource;
- (<GEOTransitShieldDataSource> *)shieldDataSource;
- (<GEOTransitTextDataSource> *)textDataSource;

@end
