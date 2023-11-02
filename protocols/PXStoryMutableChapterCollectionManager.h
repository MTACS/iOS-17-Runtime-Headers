
@protocol PXStoryMutableChapterCollectionManager

@required

- (void)deleteAllChapters;
- (void)deleteChapterWithIdentifier:(NSObject<NSCopying> *)arg1;
- (void)editChapterWithIdentifier:(void *)arg1 changeRequest:(void *)arg2; // needs 2 arg types, found 7: NSObject<NSCopying> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXStoryMutableChapter> *, void*
- (void)insertChapterWithFirstAsset:(void *)arg1 configuration:(void *)arg2; // needs 2 arg types, found 7: <PXDisplayAsset> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXStoryMutableChapter> *, void*

@end
