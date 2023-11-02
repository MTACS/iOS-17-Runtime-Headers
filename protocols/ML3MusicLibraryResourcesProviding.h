
@protocol ML3MusicLibraryResourcesProviding <NSObject>

@required

- (NSString *)libraryContainerPath;
- (NSString *)libraryContainerPathByAppendingPathComponent:(NSString *)arg1;
- (NSString *)libraryContainerRelativePath:(NSString *)arg1;
- (NSString *)mediaFolderRelativePath:(NSString *)arg1;
- (NSString *)musicAssetsContainerPath;
- (NSString *)pathForBaseLocationPath:(long long)arg1;
- (NSString *)pathForResourceFileOrFolder:(int)arg1;
- (NSString *)pathForResourceFileOrFolder:(int)arg1 basePath:(NSString *)arg2 relativeToBase:(bool)arg3 createParentFolderIfNecessary:(bool)arg4;

@end
