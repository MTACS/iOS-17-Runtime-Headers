
@protocol NPKPassesDataSourceObserver <NSObject>

@required

- (void)passesDataSource:(id <NPKPassesDataSource>)arg1 didAddPasses:(NSArray *)arg2;
- (void)passesDataSource:(id <NPKPassesDataSource>)arg1 didRemovePasses:(NSArray *)arg2;
- (void)passesDataSource:(id <NPKPassesDataSource>)arg1 didUpdatePasses:(NSArray *)arg2;
- (void)passesDataSourceDidReloadPasses:(id <NPKPassesDataSource>)arg1;
- (void)passesDataSourceDidReorderPasses:(id <NPKPassesDataSource>)arg1;

@optional

- (void)passesDataSource:(id <NPKPassesDataSource>)arg1 didUpdateSettingsForPass:(PKPass *)arg2;

@end
