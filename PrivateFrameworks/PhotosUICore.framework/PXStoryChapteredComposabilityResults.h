
@interface PXStoryChapteredComposabilityResults : NSObject <PXStoryComposabilityResults> {
    <PXStoryChapterCollection> * _chapterCollection;
    <PXDisplayAssetFetchResult> * _displayAssets;
    <PXStoryComposabilityResults> * _originalResults;
}

@property (nonatomic, readonly) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXStoryComposabilityResults> *originalResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chapterCollection;
- (struct { float x1; float x2; })composabilityScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)displayAssets;
- (id)init;
- (id)initWithDisplayAssets:(id)arg1 originalResults:(id)arg2 chapterCollection:(id)arg3;
- (id)originalResults;

@end
