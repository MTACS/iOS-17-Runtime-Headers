
@interface PXTimelineContentModeDataSource : NSObject {
    PHFetchResult * _assetSources;
    NSString * _name;
}

@property (nonatomic, retain) PHFetchResult *assetSources;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)assetSources;
- (id)initWithName:(id)arg1 assetSources:(id)arg2;
- (id)name;
- (void)setAssetSources:(id)arg1;
- (void)setName:(id)arg1;

@end
