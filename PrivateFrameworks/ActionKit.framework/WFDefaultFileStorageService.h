
@interface WFDefaultFileStorageService : NSObject <WFFileStorageService> {
    NSProgress * _progress;
}

@property (nonatomic, readonly) Class accessResourceClass;
@property (nonatomic, readonly) INAppDescriptor *associatedAppDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPublicURLs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class objectRepresentationClass;
@property (nonatomic) NSProgress *progress;
@property (nonatomic, readonly) NSString *storageLocationPrefix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsJumpingToSubdirectoryInUI;

+ (id)containerName;
+ (id)directoryTraversalError;
+ (Class)resultItemClass;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)_moveFile:(id)arg1 replaceExisting:(bool)arg2 withManagedLevel:(unsigned long long)arg3 toDestination:(id)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_retrieveFilesForAppendingAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_saveFiles:(id)arg1 toURL:(id)arg2 isDestinationKnownDirectory:(bool)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (Class)accessResourceClass;
- (void)appendText:(id)arg1 toDirectory:(id)arg2 subpath:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)associatedAppDescriptor;
- (void)createFolderAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createFolderAtPath:(id)arg1 inDirectory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createFolderAtPath:(id)arg1 parentDirectoryItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteFiles:(id)arg1 deleteImmediately:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteItems:(id)arg1 deleteImmediately:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)fileURLFromDirectory:(id)arg1 path:(id)arg2;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasPublicURLs;
- (void)moveFile:(id)arg1 destination:(id)arg2 withManagedLevel:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)moveFile:(id)arg1 replaceExisting:(bool)arg2 withManagedLevel:(unsigned long long)arg3 toDirectory:(id)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)moveItem:(id)arg1 replaceExisting:(bool)arg2 withManagedLevel:(unsigned long long)arg3 toDirectory:(id)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (Class)objectRepresentationClass;
- (id)progress;
- (void)recursivelyCreateFolderAtPathWithComponents:(id)arg1 withParentDirectoryItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)renameItem:(id)arg1 name:(id)arg2 withManagedLevel:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)retrieveFileAtPath:(id)arg1 fromDirectory:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toDirectory:(id)arg3 subpath:(id)arg4 options:(unsigned long long)arg5 progress:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setProgress:(id)arg1;
- (id)storageLocationPrefix;
- (bool)supportsJumpingToSubdirectoryInUI;

@end
