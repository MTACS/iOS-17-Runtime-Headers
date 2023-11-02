
@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource> {
    id /* block */  _cellConfigureBlock;
    id /* block */  _cellCreateBlock;
    long long  _rowAnimation;
    UITableView * _tableView;
}

@property (nonatomic, copy) id /* block */ cellConfigureBlock;
@property (nonatomic, copy) id /* block */ cellCreateBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSIndexPath *firstItemIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic) long long rowAnimation;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id /* block */)cellConfigureBlock;
- (id /* block */)cellCreateBlock;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (id)firstItemIndexPath;
- (id)indexPathForItemWithIdentifier:(id)arg1;
- (id)init;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSectionsAtIndexes:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (long long)rowAnimation;
- (void)setCellConfigureBlock:(id /* block */)arg1;
- (void)setCellCreateBlock:(id /* block */)arg1;
- (void)setRowAnimation:(long long)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
