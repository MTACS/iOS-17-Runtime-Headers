
@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {
    PXGLayout * _layoutForDiagnosticDescription;
}

@property (nonatomic, readonly) PXGLayout *layoutForDiagnosticDescription;

- (void).cxx_destruct;
- (id)activitySystemImageName;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3;
- (id)layoutForDiagnosticDescription;
- (void)performUserInteractionTask;

@end
