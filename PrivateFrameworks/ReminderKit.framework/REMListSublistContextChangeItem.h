
@interface REMListSublistContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, retain) REMListChangeItem *listChangeItem;

- (void).cxx_destruct;
- (id)_accountChangeItem;
- (void)_insertMergeableOrderingNode:(id)arg1 adjacentToMergeableOrderingNode:(id)arg2 isAfter:(bool)arg3;
- (void)addListChangeItem:(id)arg1;
- (void)addMergeableOrderingNode:(id)arg1;
- (void)addSmartListChangeItem:(id)arg1;
- (id)initWithListChangeItem:(id)arg1;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)insertMergeableOrderingNode:(id)arg1 afterMergeableOrderingNode:(id)arg2;
- (void)insertMergeableOrderingNode:(id)arg1 beforeMergeableOrderingNode:(id)arg2;
- (void)insertSmartListChangeItem:(id)arg1 afterSmartListChangeItem:(id)arg2;
- (void)insertSmartListChangeItem:(id)arg1 beforeSmartListChangeItem:(id)arg2;
- (id)listChangeItem;
- (void)setListChangeItem:(id)arg1;
- (void)undeleteChildListWithID:(id)arg1 usingUndo:(id)arg2;
- (void)undeleteChildSmartListWithID:(id)arg1 usingUndo:(id)arg2;

@end
