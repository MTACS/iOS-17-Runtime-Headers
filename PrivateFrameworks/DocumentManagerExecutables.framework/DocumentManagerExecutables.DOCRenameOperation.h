
@interface DocumentManagerExecutables.DOCRenameOperation : FPRenameOperation <DOCUndoableOperation> {
    void item;
    void newDisplayName;
    void newFileName;
    void oldDisplayName;
    void oldFileName;
    void undoManager;
}

@property (nonatomic, readonly) NSString *actionNameForUndoing;

- (void).cxx_destruct;
- (id)actionNameForUndoing;
- (id)initWithItem:(id)arg1 newDisplayName:(id)arg2;
- (id)initWithItem:(id)arg1 newFileName:(id)arg2;
- (id)initWithItem:(id)arg1 newName:(id)arg2;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;

@end
