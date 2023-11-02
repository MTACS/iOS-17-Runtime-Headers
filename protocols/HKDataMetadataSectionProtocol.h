
@protocol HKDataMetadataSectionProtocol

@required

- (UITableViewCell *)cellForIndex:(unsigned long long)arg1 tableView:(UITableView *)arg2;
- (unsigned long long)numberOfRowsInSection;
- (NSString *)sectionFooter;
- (NSString *)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(UINavigationController *)arg2 animated:(bool)arg3;
- (void)willDisplayCell:(UITableViewCell *)arg1 forIndex:(unsigned long long)arg2 tableView:(UITableView *)arg3;

@end
