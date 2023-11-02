
@protocol MCProfileTitlePageSectionController <NSObject>

@required

- (UITableViewCell *)cellForRowAtIndex:(unsigned long long)arg1;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (void)registerCellClassWithTableView:(UITableView *)arg1;
- (NSString *)titleForHeader;

@end
