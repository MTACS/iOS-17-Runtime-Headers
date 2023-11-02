
@protocol _INPBLocationValue <NSObject>

@required

- (bool)hasMapItemStorage;
- (bool)hasPlace;
- (bool)hasValueMetadata;
- (GEOMapItemStorage *)mapItemStorage;
- (GEOPDPlace *)place;
- (void)setMapItemStorage:(GEOMapItemStorage *)arg1;
- (void)setPlace:(GEOPDPlace *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
