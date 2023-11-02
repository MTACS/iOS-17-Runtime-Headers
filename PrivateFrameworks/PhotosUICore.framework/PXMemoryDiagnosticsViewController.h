
@interface PXMemoryDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {
    PHMemory * _sourceMemory;
}

- (void).cxx_destruct;
- (id)assetsForCurationType:(long long)arg1;
- (id)curationDebugInformationWithOptions:(id)arg1;
- (bool)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3;
- (id)initWithMemory:(id)arg1;
- (id)radarAttachmentURLs;
- (id)radarComponentInfoForRoute:(id)arg1;
- (id)radarDescriptionTemplate;
- (id)radarRoutes;
- (id)radarTitleTemplate;
- (id)sourceDictionary;

@end
