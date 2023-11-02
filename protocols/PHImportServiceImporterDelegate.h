
@protocol PHImportServiceImporterDelegate

@required

- (void)completedImportRecord:(PHImportRecord *)arg1;
- (long long)importAsset:(PHImportAsset *)arg1 asDuplicateOfLibraryAsset:(PHAsset *)arg2 applyToAll:(bool*)arg3;

@end
