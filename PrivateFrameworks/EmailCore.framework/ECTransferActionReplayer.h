
@interface ECTransferActionReplayer : ECLocalActionReplayer

- (id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id*)arg2;
- (id)_appendMessagesInAction:(id)arg1;
- (id)_deleteItemsInAction:(id)arg1;
- (id)_downLoadSourceMessagesInAction:(id)arg1;
- (id)_transferItemsInAction:(id)arg1 isMove:(bool)arg2;
- (id)failActionWithError:(id)arg1;
- (id)replayAction;

@end
