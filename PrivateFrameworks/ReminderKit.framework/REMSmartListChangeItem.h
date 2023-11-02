
@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMMergeableOrderingNode, REMSaveRequestTrackedValue, REMSupportedVersionProviding, REMSupportedVersionUpdating> {
    REMChangedKeysObserver * _changedKeysObserver;
    REMAccount * _parentAccount;
    REMSaveRequest * _saveRequest;
    REMSmartListStorage * _storage;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSString *badgeEmblem;
@property (nonatomic, retain) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, readonly) REMSmartListCustomContextChangeItem *customContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, retain) NSData *filterData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPersisted;
@property (nonatomic) bool isPinned;
@property (nonatomic, retain) REMManualOrdering *manualOrdering;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, readonly) REMAccount *parentAccount;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMObjectID *parentListID;
@property (nonatomic, retain) REMObjectID *parentOwnerID;
@property (nonatomic, retain) REMObjectID *parentSubContainerID;
@property (nonatomic, copy) NSDate *pinnedDate;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, retain) NSSet *sectionIDsToUndelete;
@property (nonatomic, readonly) REMSmartListSectionContextChangeItem *sectionsContextChangeItem;
@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *smartListType;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, readonly, copy) REMSmartListStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

+ (id)cdEntityName;
+ (void)initialize;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (void)assertIsCustomSmartListWithAction:(id)arg1;
- (id)changedKeys;
- (id)changedKeysObserver;
- (id)customContext;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoAccountChangeItem:(id)arg2;
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoAccountChangeItem:(id)arg2 withParentListChangeItem:(id)arg3;
- (id)initWithCustomSmartListObjectID:(id)arg1 insertIntoListSublistContextChangeItem:(id)arg2;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 changedKeysObserver:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 observeInitialValues:(bool)arg3;
- (bool)isPinned;
- (bool)isSubContainer;
- (bool)isUnsupported;
- (id)parentAccount;
- (id)parentOwnerID;
- (id)parentSubContainerID;
- (id)removeFromParentAllowingUndoWithAccountChangeItem:(id)arg1;
- (void)removeFromParentWithAccountChangeItem:(id)arg1;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)saveRequest;
- (id)sectionsContextChangeItem;
- (void)setChangedKeysObserver:(id)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setParentOwnerID:(id)arg1;
- (void)setParentSubContainerID:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)storage;
- (void)updateManualOrdering:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
