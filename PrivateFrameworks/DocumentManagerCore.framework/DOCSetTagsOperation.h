
@interface DOCSetTagsOperation : FPSetTagsOperation <DOCUndoableOperation> {
    NSArray * _oldTagsLists;
    DOCUndoManager * _undoManager;
    NSArray * _updatedTagsLists;
}

@property (nonatomic, readonly) NSString *actionNameForUndoing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *oldTagsLists;
@property (readonly) Class superclass;
@property (nonatomic, readonly) DOCUndoManager *undoManager;
@property (nonatomic, readonly) NSArray *updatedTagsLists;

- (void).cxx_destruct;
- (id)actionNameForUndoing;
- (void)clearUndoStack;
- (id)currentItems;
- (id)currentTagsLists;
- (id)initWithItems:(id)arg1 tagsLists:(id)arg2 isUndoable:(bool)arg3 shouldClearUndoStack:(bool)arg4 undoManager:(id)arg5;
- (id)itemIDsFromItems:(id)arg1;
- (id)itemsFromItemIDs:(id)arg1;
- (id)oldTagsLists;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (id)operationItemIDs;
- (void)registerUndo;
- (id)tagsListsFromItems:(id)arg1;
- (id)undoManager;
- (id)updatedTagsLists;

@end
