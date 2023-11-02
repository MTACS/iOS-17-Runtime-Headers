
@protocol PXStoryChapterCollection

@required

- (<PXStoryChapter> *)chapterAtIndex:(long long)arg1;
- (<PXStoryChapter> *)chapterContainingAsset:(id <PXDisplayAsset>)arg1;
- (bool)containsChapterBeginningWithAsset:(id <PXDisplayAsset>)arg1;
- (long long)indexOfChapterWithIdentifier:(NSObject<NSCopying> *)arg1;
- (long long)numberOfChapters;

@end
