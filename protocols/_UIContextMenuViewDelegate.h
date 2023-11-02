
@protocol _UIContextMenuViewDelegate <NSObject>

@required

- (void)contextMenuView:(_UIContextMenuView *)arg1 didSelectElement:(UIMenuElement *)arg2;
- (UIMenu *)contextMenuView:(_UIContextMenuView *)arg1 willDisplayMenu:(UIMenu *)arg2;
- (void)didSelectCancelActionInContextMenuView:(_UIContextMenuView *)arg1;

@end
