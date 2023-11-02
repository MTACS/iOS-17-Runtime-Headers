
@protocol _UIDragDropSessionInternal <_UIDragDropSessionPrivate, _UIDragDropSessionSystemShellPrivate>

@required

- (bool)_allowsItemsToUpdate;
- (<_UIDraggingInfo> *)_internalSession;
- (void)_itemsNeedUpdate:(NSArray *)arg1;

@end
