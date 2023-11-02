
@interface PXStoryTimeBasedChapterCollection : NSObject <PXStoryEditableChapterCollection> {
    NSSet * _chapterBeginningAssetLocalIdentifiers;
    NSDictionary * _chapterIndexesByIdentifier;
    NSArray * _chapters;
    bool  _usesAssetLocalCreationDates;
}

@property (nonatomic, readonly) NSSet *chapterBeginningAssetLocalIdentifiers;
@property (nonatomic, readonly) NSDictionary *chapterIndexesByIdentifier;
@property (nonatomic, readonly) NSArray *chapters;
@property (nonatomic, readonly) long long numberOfChapters;
@property (nonatomic, readonly) bool usesAssetLocalCreationDates;

- (void).cxx_destruct;
- (id)_dateForAsset:(id)arg1;
- (id)_initWithChapters:(id)arg1 usesAssetLocalCreationDates:(bool)arg2;
- (bool)canApplyEdits:(id)arg1 error:(id*)arg2;
- (id)chapterAtIndex:(long long)arg1;
- (id)chapterBeginningAssetLocalIdentifiers;
- (id)chapterContainingAsset:(id)arg1;
- (id)chapterIndexesByIdentifier;
- (id)chapters;
- (bool)containsChapterBeginningWithAsset:(id)arg1;
- (id)copyByApplyingEdits:(id)arg1;
- (void)enumerateChaptersUsingBlock:(id /* block */)arg1;
- (long long)indexOfChapterWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithAssets:(id)arg1 keyAsset:(id)arg2 configuration:(id /* block */)arg3;
- (long long)numberOfChapters;
- (bool)usesAssetLocalCreationDates;

@end
