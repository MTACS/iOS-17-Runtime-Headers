
@protocol OFUIGridViewDataSource <NSObject>

@required

- (OFUIGridViewCell *)gridView:(OFUIGridView *)arg1 cellAtIndex:(unsigned long long)arg2;
- (long long)numberOfCellsInGridView:(OFUIGridView *)arg1;

@optional

- (void)gridView:(OFUIGridView *)arg1 didRecycleCell:(OFUIGridViewCell *)arg2 atIndex:(unsigned long long)arg3;
- (void)gridView:(OFUIGridView *)arg1 willDisplayCell:(OFUIGridViewCell *)arg2 atIndex:(unsigned long long)arg3;

@end
