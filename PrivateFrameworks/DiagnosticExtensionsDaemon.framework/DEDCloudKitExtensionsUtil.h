
@interface DEDCloudKitExtensionsUtil : NSObject

+ (id)copyFiles:(id)arg1 toDirectory:(id)arg2;
+ (id)getAllFilesInSessionDirectoryForSessionID:(id)arg1;
+ (id)getCompletedExtensionFromAllExtensions:(id)arg1;
+ (id)getOutputDirectories:(id)arg1 withProcessingMap:(id)arg2;
+ (id)getOutputDirectories:(id)arg1 withProcessingMap:(id)arg2 progressHandler:(id /* block */)arg3;
+ (id)getVerifiedExtensionDirectoriesFromCompletedExtensions:(id)arg1 forSession:(id)arg2;
+ (void)updateELSSnapshotStatus:(unsigned long long)arg1;

@end
