
@protocol GEOMapItemVenueInfo <NSObject>

@required

- (<GEOMapItemVenueContents> *)contents;
- (NSArray *)filters;
- (GEOMapItemParentVenue *)parent;
- (int)venueFeatureType;
- (<GEOVenueIdentifier> *)venueIdentifier;

@end
