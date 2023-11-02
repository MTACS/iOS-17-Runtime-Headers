
@interface REMBaseSectionChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMSupportedVersionProviding, REMSupportedVersionUpdating> {
    REMChangedKeysObserver * _changedKeysObserver;
    REMSaveRequest * _saveRequest;
    REMBaseSectionStorage * _storage;
}

@property (nonatomic, readonly) REMAccountCapabilities *accountCapabilities;
@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) REMChangedKeysObserver *changedKeysObserver;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) long long effectiveMinimumSupportedVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, retain) REMBaseSectionStorage *storage;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (void)initialize;
+ (id)keysToObserve;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)accountCapabilities;
- (id)changedKeys;
- (id)changedKeysObserver;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(bool)arg4;
- (bool)isUnsupported;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)saveRequest;
- (void)setChangedKeysObserver:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)storage;
- (id)valueForUndefinedKey:(id)arg1;

@end
