
@interface PXStoryPassthroughChapterCollectionProducer : NSObject <PXStoryChapterCollectionProducer> {
    PXStoryChapterCollectionManager * _chapterCollectionManager;
}

@property (nonatomic, readonly) PXStoryChapterCollectionManager *chapterCollectionManager;

- (void).cxx_destruct;
- (id)chapterCollectionManager;
- (id)init;
- (id)initWithChapterCollectionManager:(id)arg1;
- (id)requestChapterCollectionForKeyAsset:(id)arg1 curatedAssets:(id)arg2 options:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;

@end
