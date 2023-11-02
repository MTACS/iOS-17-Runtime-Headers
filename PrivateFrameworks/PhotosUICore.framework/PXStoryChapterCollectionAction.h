
@interface PXStoryChapterCollectionAction : PXAction {
    PXStoryChapterCollectionManager * _chapterCollectionManager;
    NSArray * _edits;
    NSArray * _originalChapters;
}

@property (nonatomic, readonly) PXStoryChapterCollectionManager *chapterCollectionManager;
@property (nonatomic, readonly) NSArray *edits;
@property (nonatomic, readonly) NSArray *originalChapters;

- (void).cxx_destruct;
- (id)chapterCollectionManager;
- (id)edits;
- (id)init;
- (id)initWithChapterCollectionManager:(id)arg1 deleteChapterWithIdentifier:(id)arg2;
- (id)initWithChapterCollectionManager:(id)arg1 editChapterWithIdentifier:(id)arg2 changeRequest:(id /* block */)arg3;
- (id)initWithChapterCollectionManager:(id)arg1 edits:(id)arg2;
- (id)initWithChapterCollectionManager:(id)arg1 insertChapterWithFirstAsset:(id)arg2 configuration:(id /* block */)arg3;
- (id)originalChapters;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
