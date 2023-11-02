
@interface REMTemplate : NSObject <REMObjectIDProviding, REMSupportedVersionProviding> {
    REMTemplateStorage * _storage;
    REMStore * _store;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMListBadge *badge;
@property (nonatomic, readonly) NSString *badgeEmblem;
@property (nonatomic, readonly) REMColor *color;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, readonly) bool isPersisted;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *parentAccountID;
@property (nonatomic, readonly) REMTemplatePublicLink *publicLink;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMTemplateSectionContext *sectionContext;
@property (nonatomic, readonly) NSSet *sectionIDsToUndelete;
@property (nonatomic, readonly) bool showingLargeAttachments;
@property (nonatomic, readonly) NSString *sortingStyle;
@property (nonatomic, copy) REMTemplateStorage *storage;
@property (nonatomic, readonly) REMStore *store;

+ (id)cdEntityName;
+ (id)cdEntityNameForSavedAttachment;
+ (id)cdEntityNameForSavedReminder;
+ (id)newObjectID;
+ (id)newObjectIDForSavedAttachment;
+ (id)newObjectIDForSavedReminder;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (id)badge;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithStore:(id)arg1 storage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUnsupported;
- (id)optionalObjectID;
- (id)remObjectID;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sectionContext;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storage;
- (id)store;
- (id)valueForUndefinedKey:(id)arg1;

@end
