
@protocol ICSearchIndexableNote <ICSearchIndexable>

@required

- (NSString *)accountName;
- (NSString *)contentInfoText;
- (long long)currentStatus;
- (<ICFolderObject> *)folder;
- (NSString *)folderName;
- (NSString *)folderNameForNoteList;
- (bool)hasUnreadChanges;
- (NSString *)identifier;
- (bool)isDeletedOrInTrash;
- (bool)isModernNote;
- (bool)isPasswordProtected;
- (bool)isPinnable;
- (bool)isPinned;
- (bool)isSearchIndexableNote;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isSharedViaICloudFolder;
- (bool)isUnsupported;
- (NSString *)noteAsPlainTextWithoutTitle;
- (NSSet *)noteCellKeyPaths;
- (NSString *)title;
- (NSString *)trimmedTitle;

@optional

- (NSString *)widgetInfoText;

@end
