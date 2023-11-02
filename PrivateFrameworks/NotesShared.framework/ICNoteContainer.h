
@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer> {
    ICTTOrderedSetVersionedDocument * _subFolderIdentifiersOrderedSetDocument;
    bool  _subFolderOrderMergeableDataDirty;
}

@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, retain) NSString *accountNameForAccountListSorting;
@property (nonatomic, readonly, copy) NSString *cacheKey;
@property (nonatomic, readonly) bool canBeSharedViaICloud;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) ICFolderCustomNoteSortType *customNoteSortType;
@property (nonatomic) int dateHeadersType;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllNotesContainer;
@property (nonatomic) bool isHiddenNoteContainer;
@property (nonatomic, readonly) bool isModernCustomFolder;
@property (nonatomic, readonly) bool isSharedReadOnly;
@property (nonatomic, readonly) bool isSharedViaICloud;
@property (nonatomic, readonly) bool isShowingDateHeaders;
@property (nonatomic, readonly) bool isTrashFolder;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSString *nestedTitleForSorting;
@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (nonatomic, retain) ICAccount *owner;
@property (nonatomic) int sortOrder;
@property (nonatomic, readonly) ICCROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, retain) ICTTOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (nonatomic, copy) NSData *subFolderOrderMergeableData;
@property (getter=isSubFolderOrderMergeableDataDirty, nonatomic) bool subFolderOrderMergeableDataDirty;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDateHeaders;
@property (nonatomic, readonly) bool supportsEditingNotes;
@property (nonatomic, readonly, copy) NSString *titleForNavigationBar;
@property (nonatomic, readonly, copy) NSString *titleForTableViewCell;
@property (nonatomic, readonly) NSArray *visibleNotes;
@property (nonatomic, readonly) unsigned long long visibleNotesCount;
@property (nonatomic, readonly) NSArray *visibleSubFolders;

+ (id)keyPathsForValuesAffectingCloudAccount;

- (void).cxx_destruct;
- (id)accountName;
- (void)applyDateHeadersType:(int)arg1;
- (id)cacheKey;
- (bool)canBeSharedViaICloud;
- (id)cloudAccount;
- (id)containerIdentifier;
- (id)customNoteSortType;
- (bool)isAllNotesContainer;
- (bool)isModernCustomFolder;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isShowingDateHeaders;
- (bool)isSubFolderOrderMergeableDataDirty;
- (bool)isTrashFolder;
- (bool)mergeWithSubFolderMergeableData:(id)arg1;
- (id)noteContainerAccount;
- (bool)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)setSubFolderIdentifiersOrderedSetDocument:(id)arg1;
- (void)setSubFolderOrderMergeableData:(id)arg1;
- (void)setSubFolderOrderMergeableDataDirty:(bool)arg1;
- (id)subFolderIdentifiersOrderedSet;
- (id)subFolderIdentifiersOrderedSetDocument;
- (id)subFolderOrderMergeableData;
- (bool)supportsDateHeaders;
- (bool)supportsEditingNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleSubFolders;
- (void)willRefresh:(bool)arg1;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)writeSubFolderMergeableData;

@end
