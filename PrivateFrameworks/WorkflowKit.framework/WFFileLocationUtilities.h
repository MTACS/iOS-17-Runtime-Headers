
@interface WFFileLocationUtilities : NSObject

+ (id)bundleIdentifierForItem:(id)arg1;
+ (id)cloudDocsURL;
+ (id)desktopDirectory;
+ (id)documentsDirectory;
+ (id)documentsURLForApplicationContainerBundleID:(id)arg1;
+ (id)downloadsDirectory;
+ (void)fetchItemWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)fetchRootItemURLForDomainWithID:(id)arg1;
+ (id)iCloudDesktopDirectory;
+ (id)iCloudDocumentsDirectory;
+ (id)iCloudDownloadsDirectory;
+ (bool)isFileURL:(id)arg1 withParentItems:(id)arg2 insideFolderType:(unsigned long long)arg3;
+ (id)itemForURL:(id)arg1 error:(id*)arg2;
+ (id)mobileDocumentsDirectory;
+ (id)parentItemsForItem:(id)arg1;
+ (id)rootItemForItem:(id)arg1;

@end
