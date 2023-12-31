
@interface IKDOMChildrenBindingStrategy : IKDOMBindingStrategy

- (void)_regenerateChildDOMElements:(id)arg1 withItems:(id)arg2 usedPrototypesByIdentifier:(id)arg3;
- (void)_updateChildDOMElements:(id)arg1 withItems:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4;
- (id)initWithDOMBindingController:(id)arg1;
- (void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4;

@end
