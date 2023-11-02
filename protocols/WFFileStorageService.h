
@protocol WFFileStorageService <NSObject>

@required

+ (Class)resultItemClass;
+ (NSString *)serviceName;

- (Class)accessResourceClass;
- (INAppDescriptor *)associatedAppDescriptor;
- (bool)hasPublicURLs;
- (Class)objectRepresentationClass;
- (NSString *)storageLocationPrefix;
- (bool)supportsJumpingToSubdirectoryInUI;

@optional

- (void)appendText:(void *)arg1 toDirectory:(void *)arg2 subpath:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSURL *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)appendText:(void *)arg1 toPath:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)createFolderAtPath:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)createFolderAtPath:(void *)arg1 inDirectory:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, WFFileRepresentation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)createFolderAtPath:(void *)arg1 parentDirectoryItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, FPItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)deleteFiles:(void *)arg1 deleteImmediately:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFContentCollection *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteItems:(void *)arg1 deleteImmediately:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getSharingURLsForFiles:(void *)arg1 usePublicURLs:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFContentCollection *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)moveFile:(void *)arg1 destination:(void *)arg2 withManagedLevel:(void *)arg3 progress:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WFFileRepresentation *, NSURL *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)moveFile:(void *)arg1 replaceExisting:(void *)arg2 withManagedLevel:(void *)arg3 toDirectory:(void *)arg4 progress:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: WFFileRepresentation *, bool, unsigned long long, WFFileRepresentation *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)moveItem:(void *)arg1 replaceExisting:(void *)arg2 withManagedLevel:(void *)arg3 toDirectory:(void *)arg4 progress:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: FPItem *, bool, unsigned long long, FPItem *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)renameItem:(void *)arg1 name:(void *)arg2 withManagedLevel:(void *)arg3 progress:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: FPItem *, NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*
- (void)retrieveFileAtPath:(void *)arg1 fromDirectory:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, WFFileRepresentation *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)retrieveFilesAtPath:(void *)arg1 options:(void *)arg2 progress:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<WFFileStorageServiceOperation> *)saveFiles:(void *)arg1 withManagedLevel:(void *)arg2 toDirectory:(void *)arg3 subpath:(void *)arg4 options:(void *)arg5 progress:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: NSArray *, unsigned long long, NSURL *, NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<WFFileStorageServiceOperation> *)saveFiles:(void *)arg1 withManagedLevel:(void *)arg2 toPath:(void *)arg3 options:(void *)arg4 progress:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSArray *, unsigned long long, NSString *, unsigned long long, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)searchFiles:(void *)arg1 inPath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
