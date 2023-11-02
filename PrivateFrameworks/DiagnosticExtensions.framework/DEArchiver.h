
@interface DEArchiver : NSObject

+ (id)archiveDirectoryAt:(id)arg1;
+ (id)archiveDirectoryAt:(id)arg1 deleteOriginal:(bool)arg2;
+ (id)archiveDirectoryAt:(id)arg1 deleteOriginal:(bool)arg2 progressHandler:(id /* block */)arg3;
+ (id)archiveFile:(id)arg1;
+ (id)archiveFile:(id)arg1 deleteOriginal:(bool)arg2;
+ (id)archiveFile:(id)arg1 deleteOriginal:(bool)arg2 progressHandler:(id /* block */)arg3;
+ (unsigned long long)directorySizeOf:(id)arg1;

@end
