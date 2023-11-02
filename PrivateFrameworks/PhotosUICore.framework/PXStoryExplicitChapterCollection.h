
@interface PXStoryExplicitChapterCollection : NSObject <PXStoryChapterCollection, PXStoryMutableExplicitChapterCollection> {
    NSSet * _chapterBeginningAssetlocalIdentifiers;
    NSDictionary * _chapterIndexesByIdentifier;
    NSArray * _chapters;
    <PXDisplayAssetFetchResult> * _initializedAssets;
    NSMutableArray * _initializedChapters;
}

@property (nonatomic, readonly) NSSet *chapterBeginningAssetlocalIdentifiers;
@property (nonatomic, readonly) NSDictionary *chapterIndexesByIdentifier;
@property (nonatomic, readonly) NSArray *chapters;
@property (nonatomic, readonly) long long numberOfChapters;

- (void).cxx_destruct;
- (void)addChapterWithAssetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 configuration:(id /* block */)arg2;
- (id)chapterAtIndex:(long long)arg1;
- (id)chapterBeginningAssetlocalIdentifiers;
- (id)chapterContainingAsset:(id)arg1;
- (id)chapterIndexesByIdentifier;
- (id)chapters;
- (bool)containsChapterBeginningWithAsset:(id)arg1;
- (long long)indexOfChapterWithIdentifier:(id)arg1;
- (id)initWithAssets:(id)arg1 configuration:(id /* block */)arg2;
- (long long)numberOfChapters;

@end
