
@interface PXStoryDummyCountChapterCollectionProducer : PXStoryTransientChapterCollectionProducer {
    long long  _countInterval;
}

@property (nonatomic, readonly) long long countInterval;

- (long long)countInterval;
- (id)initWithCountInterval:(long long)arg1 storyQueue:(id)arg2;
- (id)initWithStoryQueue:(id)arg1;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)arg1 keyAsset:(id)arg2;

@end
