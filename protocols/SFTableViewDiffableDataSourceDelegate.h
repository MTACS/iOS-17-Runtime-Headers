
@protocol SFTableViewDiffableDataSourceDelegate <NSObject>

@optional

- (bool)dataSource:(SFTableViewDiffableDataSource *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (void)dataSource:(SFTableViewDiffableDataSource *)arg1 commitEditingStyle:(long long)arg2 forItemIdentifier:(id)arg3;
- (NSString *)dataSource:(SFTableViewDiffableDataSource *)arg1 footerTextForSection:(long long)arg2;
- (NSString *)dataSource:(SFTableViewDiffableDataSource *)arg1 headerTextForSection:(long long)arg2;
- (long long)dataSource:(SFTableViewDiffableDataSource *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForDataSource:(SFTableViewDiffableDataSource *)arg1;

@end
