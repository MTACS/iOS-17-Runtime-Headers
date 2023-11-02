
@interface PXStoryReusableDisplayAsset : NSObject {
    <PXDisplayAsset> * _displayAsset;
    long long  _resourceIndex;
    PXStoryResourcesDataSource * _resourcesDataSource;
}

@property (nonatomic, readonly) long long resourceIndex;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;

- (void).cxx_destruct;
- (void)configureWithDisplayResourceIndex:(long long)arg1 resourcesDataSource:(id)arg2;
- (id)displayAsset;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (long long)resourceIndex;
- (id)resourcesDataSource;
- (bool)respondsToSelector:(SEL)arg1;

@end
