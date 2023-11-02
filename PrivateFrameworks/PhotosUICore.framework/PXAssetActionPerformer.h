
@interface PXAssetActionPerformer : PXActionPerformer {
    PXSectionedSelectionManager * _selectionManager;
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setSelectionManager:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;

@end
