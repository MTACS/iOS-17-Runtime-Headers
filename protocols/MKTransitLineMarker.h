
@protocol MKTransitLineMarker <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)artwork;
- (NSString *)labelText;
- (MKMapItemIdentifier *)mapItemIdentifier;

@end
