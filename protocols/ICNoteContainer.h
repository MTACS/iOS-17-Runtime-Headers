
@protocol ICNoteContainer <ICNoteVisibilityTesting>

@required

- (NSString *)accountName;
- (void)applyDateHeadersType:(int)arg1;
- (bool)canBeSharedViaICloud;
- (NSString *)containerIdentifier;
- (ICFolderCustomNoteSortType *)customNoteSortType;
- (int)dateHeadersType;
- (bool)isAllNotesContainer;
- (bool)isDeleted;
- (bool)isModernCustomFolder;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isShowingDateHeaders;
- (bool)isTrashFolder;
- (NSManagedObjectContext *)managedObjectContext;
- (bool)mergeWithSubFolderMergeableData:(NSData *)arg1;
- (ICAccount *)noteContainerAccount;
- (bool)noteIsVisible:(ICNote *)arg1;
- (<ICNoteVisibilityTesting> *)noteVisibilityTestingForSearchingAccount;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)setSubFolderOrderMergeableData:(NSData *)arg1;
- (NSData *)subFolderOrderMergeableData;
- (bool)supportsDateHeaders;
- (bool)supportsEditingNotes;
- (NSString *)titleForNavigationBar;
- (NSString *)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (NSArray *)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (NSArray *)visibleSubFolders;

@end
