
@interface PXCuratedLibraryActionManager : PXActionManager {
    NSDictionary * _actionPerformersByType;
    NSDictionary * _assetCollectionActionPerformersByType;
    NSDictionary * _constructorSpecificActionPerformersByType;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, readonly) NSDictionary *actionPerformersByType;
@property (nonatomic, readonly) NSDictionary *assetCollectionActionPerformersByType;
@property (nonatomic, readonly) NSDictionary *constructorSpecificActionPerformersByType;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

+ (id)actionsWithActionPerformers;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2;
- (id)actionPerformerForHitTestResult:(id)arg1;
- (id)actionPerformerForNavigatingToNextZoomLevelInLayout:(id)arg1;
- (id)actionPerformersByType;
- (id)assetCollectionActionPerformersByType;
- (bool)canPerformActionType:(id)arg1;
- (id)constructorSpecificActionPerformersByType;
- (id)curationDebugPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReferenceProvider:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)showAllActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;
- (id)viewModel;

@end
