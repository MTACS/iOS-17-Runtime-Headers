
@interface MessageSelectionStrategy : NSObject {
    <MessageSelectionStrategyDataSource> * _dataSource;
}

- (void).cxx_destruct;
- (id)_itemIDToSelectFromItemID:(id)arg1 deletedMessageIDs:(id)arg2 withDirection:(int)arg3;
- (id)initWithDataSource:(id)arg1;
- (id)itemIDToSelectAfterDeletedMessageItemIDs:(id)arg1;
- (id)itemIDToSelectFromItemID:(id)arg1 withDirection:(int)arg2;
- (bool)shouldChangeSelectionAfterDeletedMessageItemIDs:(id)arg1 selectedItemIDs:(id)arg2;

@end
