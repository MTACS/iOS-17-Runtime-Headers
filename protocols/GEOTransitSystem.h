
@protocol GEOTransitSystem <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)artwork;
- (unsigned long long)muid;
- (NSString *)name;

@end
