
@interface HDCloudSyncRepository : NSObject {
    NSSet * _allCKContainers;
    HDCloudCacheBehavior * _cacheBehavior;
    CKContainer * _primaryCKContainer;
    HDProfile * _profile;
    unsigned long long  _repositorySettings;
    NSArray * _secondaryCKContainers;
    bool  _shouldPushToUnifiedZone;
    HDCloudSyncAvailability * _syncAvailability;
    NSString * _syncCircleIdentifier;
    NSString * _userRecordName;
}

@property (nonatomic, readonly) NSSet *allCKContainers;
@property (nonatomic, readonly) HDCloudCacheBehavior *cacheBehavior;
@property (nonatomic, readonly) int deviceMode;
@property (nonatomic, readonly) CKContainer *primaryCKContainer;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic) unsigned long long repositorySettings;
@property (nonatomic, readonly) NSArray *secondaryCKContainers;
@property (nonatomic, readonly) bool shouldPushToUnifiedZone;
@property (nonatomic, readonly) HDCloudSyncAvailability *syncAvailability;
@property (nonatomic, readonly, copy) NSString *syncCircleIdentifier;
@property (nonatomic, readonly, copy) NSString *userRecordName;

- (void).cxx_destruct;
- (id)allCKContainers;
- (void)cacheAllOwnerIdentifiersWithCompletion:(id /* block */)arg1;
- (id)cacheBehavior;
- (id)cachedOwnerIdentifierForContainer:(id)arg1;
- (id)containerForContainerIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceMode;
- (id)init;
- (id)initWithProfile:(id)arg1 syncCircleIdentifier:(id)arg2 primaryCKContainer:(id)arg3 secondaryCKContainers:(id)arg4 userRecordName:(id)arg5;
- (id)primaryCKContainer;
- (id)profile;
- (unsigned long long)repositorySettings;
- (id)secondaryCKContainers;
- (void)setRepositorySettings:(unsigned long long)arg1;
- (bool)shouldPushToUnifiedZone;
- (id)syncAvailability;
- (id)syncCircleIdentifier;
- (void)unitTest_setShouldPushToUnifiedZone:(bool)arg1;
- (id)userRecordName;

@end
