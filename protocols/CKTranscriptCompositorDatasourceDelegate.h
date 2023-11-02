
@protocol CKTranscriptCompositorDatasourceDelegate

@required

- (NSArray *)compositorDatasourceItemsForSection:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })compositorMarginInsets;
- (CKTranscriptLayoutMessageEditingContext *)compositorMessageEditingContext;
- (bool)compositorSupportsCustomLayoutGroupsForLayoutProvider:(id <CKTranscriptItemLayoutProvider>)arg1;
- (bool)compositorSupportsCustomLayoutGroupsForSection:(long long)arg1;
- (NSCollectionLayoutGroup *)layoutGroupForDatasourceItems:(NSArray *)arg1 environment:(CKTranscriptLayoutEnvironment *)arg2 layoutItems:(NSArray *)arg3;

@end
