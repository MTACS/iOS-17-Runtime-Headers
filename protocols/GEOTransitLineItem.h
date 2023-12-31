
@protocol GEOTransitLineItem <GEOTransitLine>

@required

- (<GEOTransitAttribution> *)attribution;
- (<GEOEncyclopedicInfo> *)encyclopedicInfo;
- (bool)hasEncyclopedicInfo;
- (bool)hasIncidentComponent;
- (NSArray *)incidents;
- (bool)isIncidentsTTLExpired;
- (NSArray *)labelItems;
- (GEOMapRegion *)mapRegion;

@end
