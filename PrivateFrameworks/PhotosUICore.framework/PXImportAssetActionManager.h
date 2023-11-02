
@interface PXImportAssetActionManager : PXAssetActionManager {
    void importController;
    void importItem;
}

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)initWithImportItem:(id)arg1 importController:(id)arg2;
- (id)initWithSelectionManager:(id)arg1;

@end
