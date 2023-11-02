
@protocol _UIViewInternalDraggingSourceDelegate <NSObject>

@required

- (bool)_canDragFromView:(UIView *)arg1;
- (long long)_dataOwnerOfDragFromView:(UIView *)arg1;
- (NSArray *)_itemsToDragFromView:(UIView *)arg1;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (void)_view:(UIView *)arg1 willBeginDraggingWithSession:(_UIInternalDraggingSessionSource *)arg2;
- (_UIDragSessionProperties *)_viewDragSessionProperties:(UIView *)arg1;
- (void)_viewFailedToDrag:(UIView *)arg1;

@end
