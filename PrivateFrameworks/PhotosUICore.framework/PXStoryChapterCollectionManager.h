
@interface PXStoryChapterCollectionManager : PXObservable <PXStoryMutableChapterCollectionManager> {
    <PXStoryChapterCollection> * _chapterCollection;
    id /* block */  _pendingCompletionHandler;
    NSMutableArray * _pendingEdits;
}

@property (nonatomic, retain) <PXStoryChapterCollection> *chapterCollection;
@property (nonatomic, copy) id /* block */ pendingCompletionHandler;
@property (nonatomic, retain) NSMutableArray *pendingEdits;

- (void).cxx_destruct;
- (bool)applyEditTransaction:(id)arg1 error:(id*)arg2;
- (id)chapterCollection;
- (void)deleteAllChapters;
- (void)deleteChapterWithIdentifier:(id)arg1;
- (void)didPerformChanges;
- (void)editChapterWithIdentifier:(id)arg1 changeRequest:(id /* block */)arg2;
- (id)init;
- (id)initWithChapterCollection:(id)arg1;
- (void)insertChapterWithFirstAsset:(id)arg1 configuration:(id /* block */)arg2;
- (id /* block */)pendingCompletionHandler;
- (id)pendingEdits;
- (void)performChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)setChapterCollection:(id)arg1;
- (void)setPendingCompletionHandler:(id /* block */)arg1;
- (void)setPendingEdits:(id)arg1;

@end
