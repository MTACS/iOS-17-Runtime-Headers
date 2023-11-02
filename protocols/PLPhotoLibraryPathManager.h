
@protocol PLPhotoLibraryPathManager <PLPhotoLibraryPathManagerCore, PLPhotoLibraryPathManagerModel, PLPhotoLibraryPathManagerDCIM>

@required

- (bool)createPathsForNewLibrariesWithError:(id*)arg1;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (NSString *)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(bool)arg4 error:(id*)arg5;
- (NSString *)internalDirectoryWithSubType:(unsigned char)arg1 additionalPathComponents:(NSString *)arg2 createIfNeeded:(bool)arg3 error:(id*)arg4;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(void *)arg1 mode:(void *)arg2 toURLWithHandler:(void *)arg3; // needs 3 arg types, found 9: PLPhotoLibraryFileIdentifier *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (bool)path:(NSString *)arg1 isSubpathOfPhotoDirectoryWithType:(unsigned char)arg2;
- (bool)pathRelativeToBundle:(NSString *)arg1 isSubpathOfPhotoDirectoryWithType:(unsigned char)arg2;
- (NSDictionary *)pathsForClientAccess:(id <PLClientAuthorization>)arg1;
- (NSSet *)pathsForExternalWriters;
- (NSSet *)pathsForFinderSyncFilesystemSizeCalculation;
- (NSSet *)pathsForLibraryFilesystemSizeCalculation;
- (NSSet *)pathsForPermissionCheck;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(NSString *)arg2;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(bool)arg4 error:(id*)arg5;
- (NSString *)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(bool)arg3 error:(id*)arg4;
- (NSString *)photosAsideDatabasePath;
- (NSString *)photosCPLDatabasePath;
- (NSString *)photosDatabasePath;
- (NSString *)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (NSString *)privateCacheDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(bool)arg4 error:(id*)arg5;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(NSString *)arg3 createIfNeeded:(bool)arg4 error:(id*)arg5;
- (NSString *)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(bool)arg3 error:(id*)arg4;

@end
