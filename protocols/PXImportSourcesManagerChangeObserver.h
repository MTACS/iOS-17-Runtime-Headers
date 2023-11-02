
@protocol PXImportSourcesManagerChangeObserver <PXChangeObserver>

@optional

- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didAddImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didFailToAddImportSource:(PHImportSource *)arg2 exceptions:(NSArray *)arg3;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didRemoveImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didUpdateImportSource:(PHImportSource *)arg2;

@end
