
@interface ML3MusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding> {
    ML3MusicLibraryResourcesManagerContext * _context;
    _ML3BaseMusicLibraryResourcesManager * _implementation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) ML3MusicLibraryResourcesManagerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _ML3BaseMusicLibraryResourcesManager *implementation;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)implementation;
- (id)initWithBaseResourcesManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)libraryContainerPath;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)mediaFolderRelativePath:(id)arg1;
- (id)musicAssetsContainerPath;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 createParentFolderIfNecessary:(bool)arg4;
- (void)setContext:(id)arg1;
- (void)setImplementation:(id)arg1;

@end
