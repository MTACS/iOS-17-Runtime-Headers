
@protocol MCMFileManager

@required

- (bool)checkFileSystemAtURL:(NSURL *)arg1 isCaseSensitive:(bool*)arg2 canAtomicSwap:(bool*)arg3 error:(id*)arg4;
- (bool)checkFileSystemAtURL:(NSURL *)arg1 supportsPerFileKeys:(bool*)arg2 error:(id*)arg3;
- (bool)compareVolumeForURL:(NSURL *)arg1 versusURL:(NSURL *)arg2 isSameVolume:(bool*)arg3 error:(id*)arg4;
- (NSString *)copyDescriptionOfURL:(NSURL *)arg1;
- (bool)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)copyItemIfExistsAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 dataProtectionClass:(int)arg4 error:(id*)arg5;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 owner:(MCMPOSIXUser *)arg4 dataProtectionClass:(int)arg5 error:(id*)arg6;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 owner:(MCMPOSIXUser *)arg4 dataProtectionClass:(int)arg5 fsNode:(id*)arg6 error:(id*)arg7;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 mode:(unsigned short)arg3 owner:(MCMPOSIXUser *)arg4 error:(id*)arg5;
- (NSURL *)createTemporaryDirectoryInDirectoryURL:(NSURL *)arg1 error:(id*)arg2;
- (NSURL *)createTemporaryDirectoryInDirectoryURL:(NSURL *)arg1 withNamePrefix:(NSString *)arg2 error:(id*)arg3;
- (bool)dataProtectionClassOfItemAtURL:(NSURL *)arg1 dataProtectionClass:(int*)arg2 error:(id*)arg3;
- (unsigned long long)dataWritingOptionsForFileAtURL:(NSURL *)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })diskUsageForURL:(NSURL *)arg1;
- (bool)enableFastDiskUsageForURL:(NSURL *)arg1 error:(id*)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })fastDiskUsageForURL:(NSURL *)arg1;
- (bool)fixUserPermissionsAtURL:(NSURL *)arg1 limitToTopLevelURL:(NSURL *)arg2 error:(id*)arg3;
- (MCMFSNode *)fsNodeOfURL:(NSURL *)arg1 followSymlinks:(bool)arg2 error:(id*)arg3;
- (NSString *)fsSanitizedStringFromString:(NSString *)arg1;
- (bool)itemAtURL:(NSURL *)arg1 exists:(bool*)arg2 error:(id*)arg3;
- (bool)itemAtURL:(NSURL *)arg1 exists:(bool*)arg2 isDirectory:(bool*)arg3 error:(id*)arg4;
- (bool)itemAtURL:(NSURL *)arg1 followSymlinks:(bool)arg2 exists:(bool*)arg3 isDirectory:(bool*)arg4 error:(id*)arg5;
- (bool)itemAtURL:(NSURL *)arg1 followSymlinks:(bool)arg2 exists:(bool*)arg3 isDirectory:(bool*)arg4 fsNode:(id*)arg5 error:(id*)arg6;
- (bool)itemDoesNotExistAtURL:(NSURL *)arg1;
- (bool)itemExistsAtURL:(NSURL *)arg1;
- (bool)itemExistsAtURL:(NSURL *)arg1 isDirectory:(bool*)arg2;
- (bool)moveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)moveItemIfExistsAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (void)printDirectoryStructureAtURL:(NSURL *)arg1;
- (NSData *)readDataFromURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (NSData *)readDataFromURL:(NSURL *)arg1 options:(unsigned long long)arg2 fsNode:(id*)arg3 error:(id*)arg4;
- (NSURL *)realPathForURL:(NSURL *)arg1 ifChildOfURL:(NSURL *)arg2;
- (NSURL *)realPathForURL:(NSURL *)arg1 isDirectory:(bool)arg2 error:(id*)arg3;
- (bool)removeExclusionFromBackupFromURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)removeItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)repairPermissionsAtURL:(NSURL *)arg1 uid:(unsigned int)arg2 gid:(unsigned int)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (bool)replaceItemAtDestinationURL:(NSURL *)arg1 withSourceURL:(NSURL *)arg2 swapped:(bool*)arg3 error:(id*)arg4;
- (bool)setDataProtectionClassOfItemAtURL:(void *)arg1 toDataProtectionClass:(void *)arg2 ifPredicate:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 9: NSURL *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, int, void*, id*
- (bool)setTopLevelSystemContainerACLAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)standardizeACLsAtURL:(NSURL *)arg1 isSystemContainer:(bool)arg2 error:(id*)arg3;
- (bool)standardizeACLsForSystemContainerAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)standardizeAllSystemContainerACLsAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)standardizeOwnershipAtURL:(NSURL *)arg1 toPOSIXUser:(MCMPOSIXUser *)arg2 error:(id*)arg3;
- (bool)stripACLFromURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)symbolicallyLinkURL:(NSURL *)arg1 toSymlinkTarget:(NSString *)arg2 error:(id*)arg3;
- (NSString *)targetOfSymbolicLinkAtURL:(NSURL *)arg1 error:(id*)arg2;
- (NSArray *)urlsForItemsInDirectoryAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id*)arg5;

@end
