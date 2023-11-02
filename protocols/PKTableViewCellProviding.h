
@protocol PKTableViewCellProviding <NSObject>

@required

+ (NSString *)cellReuseIdentifier;

- (bool)shouldHighlight;
- (UITableViewCell *)tableViewCellForTableView:(UITableView *)arg1 atIndexPath:(NSIndexPath *)arg2;

@optional

- (void)handleCellSelection;

@end
