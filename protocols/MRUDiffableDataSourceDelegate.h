
@protocol MRUDiffableDataSourceDelegate <NSObject>

@required

- (void)dataSource:(MRUDiffableDataSource *)arg1 didDeleteItemWithIdentifier:(NSString *)arg2;
- (void)dataSource:(MRUDiffableDataSource *)arg1 moveItemToTopWithIdentifier:(NSString *)arg2;
- (void)dataSource:(MRUDiffableDataSource *)arg1 moveItemWithIdentifier:(NSString *)arg2 aferIndentifier:(NSString *)arg3;

@end
