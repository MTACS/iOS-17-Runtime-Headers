
@protocol SKUIIndexBarControlDataSource <NSObject>

@required

- (SKUIIndexBarEntry *)indexBarControl:(SKUIIndexBarControl *)arg1 entryAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControl:(SKUIIndexBarControl *)arg1 numberOfEntriesInSection:(long long)arg2;

@optional

- (SKUIIndexBarEntry *)combinedEntryForIndexBarControl:(SKUIIndexBarControl *)arg1;
- (long long)numberOfSectionsInIndexBarControl:(SKUIIndexBarControl *)arg1;

@end
