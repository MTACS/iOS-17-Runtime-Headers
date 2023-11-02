
@interface FBKFileManager : NSObject

+ (id)applicationSupportDirectory;
+ (id)cachedTemporaryDirectory;
+ (id)containerURL;
+ (void)deleteAllDraftDirectories;
+ (id)draftDirectoryForFilerForm:(id)arg1;
+ (id)draftDirectoryForFilerForm:(id)arg1 isTemporary:(bool)arg2;
+ (id)draftDirectoryForFilerType:(long long)arg1;
+ (id)draftDirectoryForFilerType:(long long)arg1 isTemporary:(bool)arg2;
+ (id)draftsDirectory;
+ (id)getUniqueDestinationURLForURL:(id)arg1 alwaysIndex:(bool)arg2;
+ (id)getUniqueDestinationURLForURL:(id)arg1 alwaysIndex:(bool)arg2 forSourceURL:(id)arg3;
+ (bool)humansCanReadFile:(id)arg1;
+ (bool)isDirectory:(id)arg1;
+ (id)libraryDirectory;
+ (void)setCachedTemporaryDirectory:(id)arg1;
+ (id)temporaryDirectoryWithPathComponents:(id)arg1;
+ (id)temporaryDraftDirectoryForFilerForm:(id)arg1;

@end
