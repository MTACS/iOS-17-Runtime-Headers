
@protocol PXStoryChapterCollectionChapterModification <PXStoryChapterCollectionEdit>

@required

- (id /* block */)chapterChangeRequest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <PXStoryMutableChapter> *, void*, id, SEL
- (NSObject<NSCopying> *)editedChapterIdentifier;

@end
