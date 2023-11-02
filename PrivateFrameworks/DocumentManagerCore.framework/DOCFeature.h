
@interface DOCFeature : NSObject

+ (id)forceUnmount;
+ (id)quickLookAllDocumentsInFiles;
+ (id)quickLookEntireFolderInWindow;
+ (bool)quickLookInSeparateProcess;
+ (id)quickLookInWindow;
+ (id)quickLookInWindowShared;
+ (id)quickLookRestrictContentTypesThatOpenInWindow;
+ (id)returnToSender;
+ (id)searchByTopicsAndCategories;
+ (id)showTips;
+ (id)suggestedMoveToFolderInContextMenu;
+ (bool)supportsQuickLookInSharedWindow;
+ (bool)supportsQuickLookInsteaedOfOpen:(id)arg1;
+ (id)usbDiskProperties;
+ (id)usbRenameErase;
+ (id)useBlastDoorThumbnails;

@end
