
@interface PXAssetActionManager : PXActionManager {
    PXSectionedObjectReference * _objectReference;
    PXSectionedSelectionManager * _selectionManager;
}

@property (nonatomic, readonly) PXSelectionSnapshot *effectiveSelectionSnapshot;
@property (nonatomic, retain) PXSectionedObjectReference *objectReference;
@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (bool)canPerformAssetVariationActions;
- (id)effectiveSelectionSnapshot;
- (void)executeActionForActionType:(id)arg1 sender:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2;
- (id)initWithSelectionManager:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)objectReference;
- (void)px_registerAdditionalPerformerClasses;
- (id)selectionManager;
- (void)setAdditionalPropertiesFromActionManager:(id)arg1;
- (void)setObjectReference:(id)arg1;
- (void)setSelectionManager:(id)arg1;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;
- (id)systemImageNameForActionType:(id)arg1;

@end
