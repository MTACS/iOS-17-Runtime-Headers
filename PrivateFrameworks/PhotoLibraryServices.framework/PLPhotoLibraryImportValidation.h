
@interface PLPhotoLibraryImportValidation : NSObject {
    NSFileManager * _fm;
    PLLibraryServicesManager * _libraryServicesManager;
    PLPhotoLibraryPathManager * _pm;
}

- (void).cxx_destruct;
- (bool)checkLegacyLibraryRequiresRepairWithError:(id*)arg1;
- (bool)checkLegacyLibraryVersionStatusWithError:(id*)arg1;
- (bool)checkLibraryCPLStatusWithError:(id*)arg1;
- (bool)checkLibraryVersionStatusWithError:(id*)arg1;
- (id)initWithLibraryManager:(id)arg1;
- (bool)isLibraryValidForImportWithError:(id*)arg1;

@end
