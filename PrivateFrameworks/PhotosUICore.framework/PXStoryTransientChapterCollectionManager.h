
@interface PXStoryTransientChapterCollectionManager : PXStoryChapterCollectionManager <PXStoryMutableTransientChapterCollectionManager> {
    NSArray * _edits;
    <PXStoryTransientChapterCollectionManagerPersistenceDelegate> * _persistenceDelegate;
    <PXStoryChapterCollection> * _uneditedChapterCollection;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) NSArray *edits;
@property (nonatomic) <PXStoryTransientChapterCollectionManagerPersistenceDelegate> *persistenceDelegate;
@property (nonatomic, readonly) <PXStoryChapterCollection> *uneditedChapterCollection;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_invalidateChapterCollection;
- (void)_setNeedsUpdate;
- (void)_updateChapterCollection;
- (bool)_validateEditTransaction:(id)arg1 error:(id*)arg2;
- (bool)applyEditTransaction:(id)arg1 error:(id*)arg2;
- (void)didPerformChanges;
- (id)edits;
- (id)initWithChapterCollection:(id)arg1;
- (id)initWithUneditedChapterCollection:(id)arg1;
- (void)performChanges:(id /* block */)arg1;
- (id)persistenceDelegate;
- (void)setEdits:(id)arg1;
- (void)setPersistenceDelegate:(id)arg1;
- (void)setUneditedChapterCollection:(id)arg1;
- (id)uneditedChapterCollection;
- (id)updater;

@end
