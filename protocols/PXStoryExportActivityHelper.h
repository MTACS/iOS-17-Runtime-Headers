
@protocol PXStoryExportActivityHelper <NSObject>

@required

- (<PXDisplayCollection> *)collection;
- (void)didBeginExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (void)didEndExportWithConfiguration:(PXStoryExportConfiguration *)arg1;
- (<PXDisplayAsset> *)iconAsset;
- (NSString *)preferredExportFilename;
- (void)requestExportConfigurationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXStoryExportConfiguration *, NSError *, void*

@end
