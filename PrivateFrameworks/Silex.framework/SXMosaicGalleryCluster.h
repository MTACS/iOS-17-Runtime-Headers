
@interface SXMosaicGalleryCluster : NSObject {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (bool)clusterIsEqualToTileTypes:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItems:(id)arg1;
- (bool)isClusterOfType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
