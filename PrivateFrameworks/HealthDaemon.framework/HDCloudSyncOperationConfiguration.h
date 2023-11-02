
@interface HDCloudSyncOperationConfiguration : NSObject {
    HDAssertion * _accessibilityAssertion;
    HDCloudSyncCachedCloudState * _cachedCloudState;
    bool  _canceled;
    HDCloudSyncComputedState * _computedState;
    HDCloudSyncContext * _context;
    NSMutableSet * _finishedTags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CKOperationGroup * _operationGroup;
    HDCloudSyncRepository * _repository;
    NSString * _shortProfileIdentifier;
    NSString * _shortSyncIdentifier;
    NSString * _syncContainerPrefix;
    NSDate * _syncDate;
    NSUUID * _syncIdentifier;
}

@property (nonatomic, readonly) HDAssertion *accessibilityAssertion;
@property (nonatomic, readonly, copy) NSDictionary *analyticsDictionary;
@property (nonatomic, readonly, copy) HDCloudSyncCachedCloudState *cachedCloudState;
@property bool canceled;
@property (retain) HDCloudSyncComputedState *computedState;
@property (nonatomic, readonly, copy) HDCloudSyncContext *context;
@property (readonly, copy) NSSet *finishedOperationTags;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (nonatomic, readonly) bool rebaseProhibited;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, readonly, copy) NSString *shortProfileIdentifier;
@property (nonatomic, readonly, copy) NSString *shortSyncIdentifier;
@property (nonatomic, readonly, copy) NSString *syncContainerPrefix;
@property (nonatomic, readonly, copy) NSDate *syncDate;
@property (nonatomic, readonly, copy) NSUUID *syncIdentifier;

- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (id)analyticsDictionary;
- (id)cachedCloudState;
- (void)cancelAllOperations;
- (bool)canceled;
- (id)computedState;
- (id)context;
- (void)dealloc;
- (id)descriptionForSignpost;
- (void)didFinishOperationTag:(id)arg1;
- (id)finishedOperationTags;
- (id)initWithRepository:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 context:(id)arg4 accessibilityAssertion:(id)arg5 syncIdentifier:(id)arg6 syncDate:(id)arg7;
- (id)operationGroup;
- (id)pushStoreWithIdentifier:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)pushStoresForContainer:(id)arg1 error:(id*)arg2;
- (bool)rebaseProhibited;
- (id)repository;
- (bool)satisfiesOperationTagDependencies:(id)arg1 error:(id*)arg2;
- (void)setCanceled:(bool)arg1;
- (void)setComputedState:(id)arg1;
- (id)shortProfileIdentifier;
- (id)shortSyncIdentifier;
- (id)syncContainerPrefix;
- (id)syncDate;
- (id)syncIdentifier;

@end
