
@protocol SUUIIndexBarControlDataSource <NSObject>

@required

- (SUUIIndexBarEntry *)indexBarControl:(SUUIIndexBarControl *)arg1 entryAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControl:(SUUIIndexBarControl *)arg1 numberOfEntriesInSection:(long long)arg2;

@optional

- (SUUIIndexBarEntry *)combinedEntryForIndexBarControl:(SUUIIndexBarControl *)arg1;
- (long long)numberOfSectionsInIndexBarControl:(SUUIIndexBarControl *)arg1;

@end
