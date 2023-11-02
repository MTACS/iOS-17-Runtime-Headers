
@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy {
    NSIndexSet * _autoHighlightedIndexes;
    IKChangeSet * _itemsChangeSet;
    NSDictionary * _usedAppPrototypesByIdentifier;
}

@property (nonatomic, copy) NSIndexSet *autoHighlightedIndexes;
@property (nonatomic, retain) IKChangeSet *itemsChangeSet;
@property (nonatomic, retain) NSDictionary *usedAppPrototypesByIdentifier;

- (void).cxx_destruct;
- (id)_appDataItemFromDataItem:(id)arg1 binding:(id)arg2 prototypeIdentifier:(id)arg3 autoHighlighted:(bool*)arg4;
- (void)_reevaluateVisibleIndexRange;
- (void)_updateChildDOMElements;
- (id)autoHighlightedIndexes;
- (void)didResolveKeys:(id)arg1;
- (id)initWithDOMBindingController:(id)arg1;
- (id)itemsChangeSet;
- (void)setAutoHighlightedIndexes:(id)arg1;
- (void)setItemsChangeSet:(id)arg1;
- (void)setUsedAppPrototypesByIdentifier:(id)arg1;
- (id)usedAppPrototypesByIdentifier;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemsRange;
- (void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4;

@end
