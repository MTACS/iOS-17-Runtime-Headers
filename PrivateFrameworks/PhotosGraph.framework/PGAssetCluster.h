
@interface PGAssetCluster : NSObject {
    NSArray * _assets;
    CLCircularRegion * _region;
}

@property (nonatomic, readonly, retain) NSArray *assets;
@property (nonatomic, readonly, retain) CLCircularRegion *region;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithAssets:(id)arg1 region:(id)arg2;
- (id)region;

@end
