
@interface REMTemplateChangeItem : NSObject <REMConflictResolving, REMObjectIDProviding, REMSaveRequestTrackedValue, REMSupportedVersionProviding, REMSupportedVersionUpdating> {
    REMChangedKeysObserver * _changedKeysObserver;
    REMSaveRequest * _saveRequest;
    REMTemplateStorage * _storage;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, copy) REMListBadge *badge;
@property (nonatomic, retain) NSString *badgeEmblem;
@property (nonatomic, retain) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, retain) REMTemplateConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPersisted;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, readonly) REMTemplatePublicLink *publicLink;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, retain) NSSet *sectionIDsToUndelete;
@property (nonatomic, readonly) REMTemplateSectionContextChangeItem *sectionsContextChangeItem;
@property (nonatomic) bool shouldUpdateSectionsOrdering;
@property (nonatomic) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, readonly, copy) REMTemplateStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) REMManualOrdering *unsavedManualOrdering;
@property (nonatomic, retain) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic, retain) NSArray *unsavedSectionIDsOrdering;

+ (id)cdEntityName;
+ (void)initialize;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (id)badge;
- (id)changedKeys;
- (id)changedKeysObserver;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 configuration:(id)arg3 insertIntoAccountChangeItem:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 changedKeysObserver:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 observeInitialValues:(bool)arg3;
- (bool)isUnsupported;
- (void)removeFromParentAccount;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)saveRequest;
- (id)sectionsContextChangeItem;
- (void)setBadge:(id)arg1;
- (void)setChangedKeysObserver:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)storage;
- (void)updateManualOrdering:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
