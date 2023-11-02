
@interface PXStoryMemoryChapterCollectionProducer : PXStoryTransientChapterCollectionProducer {
    PHMemory * _memory;
    NSArray * _workQueue_originalPhotosGraphChapters;
}

@property (nonatomic, readonly) PHMemory *memory;

+ (id)chapterCollectionForPhotosGraphChapters:(id)arg1 assets:(id)arg2 keyAsset:(id)arg3 error:(id*)arg4;
+ (id)photosGraphChaptersForChapterCollection:(id)arg1 originalPhotosGraphChapters:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithMemory:(id)arg1 storyQueue:(id)arg2;
- (id)initWithStoryQueue:(id)arg1;
- (id)memory;
- (void)workQueue_saveEditTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)arg1 keyAsset:(id)arg2;

@end
