
@interface BRCRecursiveListDirectoryContentsOperation : BRCAutoCancelOperation <BRCListOperationDelegate> {
    BRCListDirectoryContentsOperation * _activeListOp;
    NSMutableSet * _itemsFailedListing;
    NSMutableSet * _itemsToList;
    NSMutableArray * _recursiveListCompletionBlocks;
    bool  _rescheduleApply;
    BRCItemID * _rootItemID;
    BRCServerZone * _serverZone;
}

@property (nonatomic) bool rescheduleApply;

- (void).cxx_destruct;
- (bool)_finishIfBlockedFromListing;
- (void)addRecursiveDirectoryListCompletionBlock:(id /* block */)arg1;
- (void)cancel;
- (void)fetchNextItemToList;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItemID:(id)arg1 zone:(id)arg2 isUserWaiting:(bool)arg3;
- (void)listNextItem;
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;
- (void)listOrFetchNextItem;
- (void)main;
- (bool)rescheduleApply;
- (void)setRescheduleApply:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
