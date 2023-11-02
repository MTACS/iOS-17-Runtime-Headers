
@interface SearchUICollectionViewDataSource : UICollectionViewDiffableDataSource <SearchUIAsyncSectionLoaderDelegate> {
    NSObject<OS_dispatch_queue> * _applyQueue;
    SearchUICollectionViewController * _controller;
    int  _numberOfUpdatesInProgress;
    NSMutableSet * _registeredCellIdentifiers;
}

@property (retain) NSObject<OS_dispatch_queue> *applyQueue;
@property SearchUICollectionViewController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasFocusableElements;
@property (readonly) unsigned long long hash;
@property int numberOfUpdatesInProgress;
@property (nonatomic, retain) NSMutableSet *registeredCellIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applyQueue;
- (void)applySnapshot:(id)arg1 animated:(bool)arg2 skipsDiffing:(bool)arg3 completion:(id /* block */)arg4;
- (id)cellForRowModel:(id)arg1 atIndexPath:(id)arg2;
- (id)controller;
- (id)currentSnapshotLayoutConfiguration;
- (bool)hasFocusableElements;
- (id)initWithController:(id)arg1;
- (id)layoutSectionForSectionModel:(id)arg1 layoutEnvironment:(id)arg2 attributes:(id)arg3;
- (int)numberOfUpdatesInProgress;
- (id)pointerStringFrom:(id)arg1;
- (id)rebuildAsyncLoaderResult:(id)arg1 forCardSections:(id)arg2;
- (void)rebuildSnapshotForAsyncLoaders:(id)arg1;
- (void)registerCellForRowModel:(id)arg1;
- (id)registerFooterView:(id)arg1;
- (void)registerSupplementaryViews;
- (id)registeredCellIdentifiers;
- (void)reloadModel;
- (void)reloadSection:(id)arg1 animated:(bool)arg2;
- (void)reloadSection:(id)arg1 animated:(bool)arg2 reconfigureExisting:(bool)arg3;
- (void)removeRowModel:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSectionContaining:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSectionModel:(id)arg1 completion:(id /* block */)arg2;
- (id)reuseIdentifierForFooterView:(id)arg1;
- (id)reuseIdentifierForRowModel:(id)arg1;
- (void)setApplyQueue:(id)arg1;
- (void)setController:(id)arg1;
- (void)setNumberOfUpdatesInProgress:(int)arg1;
- (void)setRegisteredCellIdentifiers:(id)arg1;
- (void)updateWithSnapshot:(id)arg1;
- (void)updateWithSnapshot:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
