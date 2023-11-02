
@interface WFDropboxStorageService : NSObject <WFFileStorageService>

@property (nonatomic, readonly) Class accessResourceClass;
@property (nonatomic, readonly) INAppDescriptor *associatedAppDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPublicURLs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class objectRepresentationClass;
@property (nonatomic, readonly) NSString *storageLocationPrefix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsJumpingToSubdirectoryInUI;

+ (Class)resultItemClass;
+ (id)serviceName;

- (Class)accessResourceClass;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)associatedAppBundleIdentifier;
- (id)associatedAppDescriptor;
- (void)createFolderAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteFiles:(id)arg1 deleteImmediately:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)finishRetrievalWithContentsOfFolderAtPath:(id)arg1 sessionManager:(id)arg2 retrievalHandler:(id /* block */)arg3;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasPublicURLs;
- (Class)objectRepresentationClass;
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)storageLocationPrefix;
- (bool)supportsJumpingToSubdirectoryInUI;

@end
