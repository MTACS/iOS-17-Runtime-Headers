
@interface PXStoryDummyDailyChapterCollectionProducer : PXStoryTransientChapterCollectionProducer {
    long long  _dayInterval;
}

@property (nonatomic, readonly) long long dayInterval;

- (long long)dayInterval;
- (id)initWithDayInterval:(long long)arg1 storyQueue:(id)arg2;
- (id)initWithStoryQueue:(id)arg1;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)arg1 keyAsset:(id)arg2;

@end
