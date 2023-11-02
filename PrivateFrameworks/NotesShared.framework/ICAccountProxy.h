
@interface ICAccountProxy : NSObject <ICNoteContainer> {
    ICAccount * _account;
}

@property (retain) ICAccount *account;
@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, readonly) bool canBeSharedViaICloud;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) ICFolderCustomNoteSortType *customNoteSortType;
@property (nonatomic, readonly) int dateHeadersType;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllNotesContainer;
@property (nonatomic, readonly) bool isModernCustomFolder;
@property (nonatomic, readonly) bool isSharedReadOnly;
@property (nonatomic, readonly) bool isSharedViaICloud;
@property (nonatomic, readonly) bool isShowingDateHeaders;
@property (nonatomic, readonly) bool isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (nonatomic, copy) NSData *subFolderOrderMergeableData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDateHeaders;
@property (nonatomic, readonly) bool supportsEditingNotes;
@property (nonatomic, readonly, copy) NSString *titleForNavigationBar;
@property (nonatomic, readonly, copy) NSString *titleForTableViewCell;
@property (nonatomic, readonly) NSArray *visibleNotes;
@property (nonatomic, readonly) unsigned long long visibleNotesCount;
@property (nonatomic, readonly) NSArray *visibleSubFolders;

+ (id)accountProxyWithAccount:(id)arg1;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (void).cxx_destruct;
- (id)account;
- (id)accountName;
- (void)applyDateHeadersType:(int)arg1;
- (bool)canBeSharedViaICloud;
- (long long)compare:(id)arg1;
- (id)containerIdentifier;
- (id)customNoteSortType;
- (id)customNoteSortTypeValue;
- (int)dateHeadersType;
- (id)initWithAccount:(id)arg1;
- (bool)isAllNotesContainer;
- (bool)isDeleted;
- (bool)isLeaf;
- (bool)isModernCustomFolder;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isShowingDateHeaders;
- (bool)isTrashFolder;
- (id)managedObjectContext;
- (bool)mergeWithSubFolderMergeableData:(id)arg1;
- (id)noteContainerAccount;
- (bool)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)objectID;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)setAccount:(id)arg1;
- (void)setSubFolderOrderMergeableData:(id)arg1;
- (id)subFolderOrderMergeableData;
- (bool)supportsDateHeaders;
- (bool)supportsEditingNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleSubFolders;

@end
