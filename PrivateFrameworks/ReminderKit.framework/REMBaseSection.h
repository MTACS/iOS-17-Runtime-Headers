
@interface REMBaseSection : NSObject <REMObjectIDProviding, REMSupportedVersionProviding> {
    REMAccountCapabilities * _accountCapabilities;
    REMBaseSectionStorage * _storage;
    REMStore * _store;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly) NSData *resolutionTokenMapData;
@property (nonatomic, copy) REMBaseSectionStorage *storage;
@property (nonatomic, readonly) REMStore *store;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithStore:(id)arg1 accountCapabilities:(id)arg2 storage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUnsupported;
- (id)remObjectID;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storage;
- (id)store;
- (id)valueForUndefinedKey:(id)arg1;

@end
