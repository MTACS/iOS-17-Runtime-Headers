
@interface REMReplicaIDHelper : NSObject <REMReplicaManagerClient> {
    NSUUID * _acquiredReplicaUUID;
    <REMReplicaManagerProviding> * _lazilyCachedReplicaManagerProvider;
    <REMReplicaIDHelperOwner> * _owner;
    <REMReplicaClockProviding> * _replicaClockProvider;
    REMReplicaIDSource * _replicaIDSource;
}

@property (nonatomic, retain) NSUUID *acquiredReplicaUUID;
@property (nonatomic, readonly) NSString *crdtID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <REMReplicaManagerProviding> *lazilyCachedReplicaManagerProvider;
@property (nonatomic) <REMReplicaIDHelperOwner> *owner;
@property (nonatomic, retain) <REMReplicaClockProviding> *replicaClockProvider;
@property (nonatomic, retain) REMReplicaIDSource *replicaIDSource;
@property (nonatomic, readonly) REMReplicaManager *replicaManager;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (readonly) Class superclass;

+ (id)nonEditingReplicaUUID;
+ (id)replicaUUIDForCreation;

- (void).cxx_destruct;
- (id)acquiredReplicaUUID;
- (id)clockElementListForReplicaUUID:(id)arg1;
- (id)crdtID;
- (void)dealloc;
- (void)didCopy;
- (void)didSerialize;
- (id)initWithReplicaIDSource:(id)arg1 owner:(id)arg2 replicaClockProvider:(id)arg3;
- (id)lazilyCachedReplicaManagerProvider;
- (id)owner;
- (id)replicaClockProvider;
- (id)replicaIDSource;
- (id)replicaManager;
- (id)replicaUUID;
- (void)setAcquiredReplicaUUID:(id)arg1;
- (void)setLazilyCachedReplicaManagerProvider:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReplicaClockProvider:(id)arg1;
- (void)setReplicaIDSource:(id)arg1;
- (void)willEdit;

@end
