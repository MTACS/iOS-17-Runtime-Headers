
@interface HKElectrocardiogramMoreHealthDataProvider : NSObject {
    NSMutableArray * _dataSource;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) NSMutableArray *dataSource;

- (void).cxx_destruct;
- (void)_configureLayoutForView:(id)arg1 inCell:(id)arg2;
- (id)_defaultCellWithBackgroundColor:(id)arg1;
- (id)_itemViewForRow:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_offscreenInsets;
- (id)_sentinelCell;
- (void)addItem:(id)arg1;
- (id)cellForRow:(long long)arg1 tableView:(id)arg2;
- (long long)count;
- (id)dataSource;
- (id)init;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)unitTesting_itemsForIdentifiers:(id)arg1;

@end
