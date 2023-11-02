
@interface REMSmartList : NSObject <REMObjectIDProviding, REMSupportedVersionProviding> {
    REMAccount * _account;
    REMList * _parentList;
    REMSmartListStorage * _storage;
    REMStore * _store;
}

@property (nonatomic, retain) REMAccount *account;
@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *badgeEmblem;
@property (nonatomic, readonly) REMColor *color;
@property (nonatomic, readonly) REMSmartListCustomContext *customContext;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, readonly) NSData *filterData;
@property (nonatomic, readonly) bool isOriginOfExistingTemplate;
@property (nonatomic) bool isPersisted;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMList *parentList;
@property (nonatomic, readonly) REMObjectID *parentListID;
@property (nonatomic, readonly) NSDate *pinnedDate;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSmartListSectionContext *sectionContext;
@property (nonatomic, readonly) NSSet *sectionIDsToUndelete;
@property (nonatomic, readonly) bool showingLargeAttachments;
@property (nonatomic, copy) NSString *smartListType;
@property (nonatomic, readonly) NSString *sortingStyle;
@property (nonatomic, copy) REMSmartListStorage *storage;
@property (nonatomic, readonly) REMStore *store;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)accountCapabilities;
- (id)customContext;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithStore:(id)arg1 account:(id)arg2 parentList:(id)arg3 storage:(id)arg4;
- (id)initWithStore:(id)arg1 storage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOriginOfExistingTemplate;
- (bool)isPinned;
- (bool)isUnsupported;
- (id)optionalObjectID;
- (id)parentList;
- (id)remObjectID;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sectionContext;
- (void)setAccount:(id)arg1;
- (void)setParentList:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storage;
- (id)store;
- (id)valueForUndefinedKey:(id)arg1;

@end
