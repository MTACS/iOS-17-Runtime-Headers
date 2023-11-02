
@interface _PXStoryConcreteScorerDisplayAsset : NSObject {
    <PXDisplayAsset> * _displayAsset;
    long long  _resourceIndex;
    PXStoryResourcesDataSource * _resourcesDataSource;
}

- (void).cxx_destruct;
- (id)displayAsset;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (long long)resourceIndex;
- (id)resourcesDataSource;
- (void)setResourceIndex:(long long)arg1 resourcesDataSource:(id)arg2;

@end
