
@protocol GEOTransitLabelItem <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)labelArtwork;
- (NSString *)labelString;
- (unsigned long long)type;

@end
