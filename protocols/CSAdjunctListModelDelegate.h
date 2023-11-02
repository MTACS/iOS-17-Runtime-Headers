
@protocol CSAdjunctListModelDelegate <NSObject>

@required

- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didAddItem:(CSAdjunctListItem *)arg2;
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didRemoveItem:(CSAdjunctListItem *)arg2;
- (void)adjunctListModel:(CSAdjunctListModel *)arg1 didUpdateItem:(CSAdjunctListItem *)arg2 withItem:(CSAdjunctListItem *)arg3;

@end
