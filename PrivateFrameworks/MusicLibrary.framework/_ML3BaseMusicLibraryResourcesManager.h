
@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding> {
    NSString * _libraryContainerIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *libraryContainerIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_controlDirectoryPathWithBasePath:(id)arg1;
- (id)_libraryContainerPathForDSID:(id)arg1;
- (id)_mediaPath;
- (id)_mediaRelativeMusicAssetsDirectoryPath;
- (bool)_mediaResourceRequiresLibraryContainerAccess:(int)arg1;
- (id)_musicAssetsPathRelativeToBasePath:(id)arg1;
- (id)_pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 isFolder:(bool*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryContainerIdentifier:(id)arg1;
- (id)libraryContainerIdentifier;
- (id)libraryContainerPath;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)mediaFolderRelativePath:(id)arg1;
- (id)musicAssetsContainerPath;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 createParentFolderIfNecessary:(bool)arg4;

@end
