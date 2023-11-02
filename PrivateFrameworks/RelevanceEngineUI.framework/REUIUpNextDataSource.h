
@interface REUIUpNextDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource> {
    REUIRelevanceEngineController * _controller;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REUIRelevanceEngineControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (nonatomic, readonly) NSArray *sectionOrder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sectionTitleAtIndex:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)delegate;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)relevanceEngine;
- (id)sectionOrder;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
