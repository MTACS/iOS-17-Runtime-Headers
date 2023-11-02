
@protocol SUUIItemListTableDelegate <NSObject>

@optional

- (bool)itemList:(SUUIItemListTableViewController *)arg1 canRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (SUUIItemState *)itemList:(SUUIItemListTableViewController *)arg1 didConfirmItemOfferForItem:(SUUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SUUIItemListTableViewController *)arg1 didDeselectItem:(SUUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SUUIItemListTableViewController *)arg1 didRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (void)itemList:(SUUIItemListTableViewController *)arg1 didSelectItem:(SUUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSString *)itemList:(SUUIItemListTableViewController *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)itemList:(SUUIItemListTableViewController *)arg1 willDisplayCellForItem:(SUUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemListWillBeginDragging:(SUUIItemListTableViewController *)arg1;

@end
