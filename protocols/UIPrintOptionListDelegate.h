
@protocol UIPrintOptionListDelegate <NSObject>

@required

- (NSArray *)itemList;
- (long long)listItemSelected:(NSIndexPath *)arg1;
- (UIPrintPanelViewController *)printPanelViewController;
- (NSIndexPath *)selectedItem;
- (NSString *)title;

@optional

- (bool)isItemSelected:(NSIndexPath *)arg1;
- (NSArray *)selectedItems;
- (NSString *)titleForFooterInSection:(long long)arg1;
- (NSString *)titleForHeaderInSection:(long long)arg1;

@end
