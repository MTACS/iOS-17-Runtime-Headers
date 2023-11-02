
@interface HMDCloudGroup : HMFObject <HMFLogging> {
    HMDBackingStoreCacheGroup * _backingStoreGroup;
    HMDCloudCache * _cache;
    HMDCloudZone * _cloudZone;
    bool  _doRecordsExistInCache;
    NSUUID * _identifier;
    NSMutableDictionary * _objectIDToRecordNameMap;
    NSUUID * _ownerID;
}

@property (nonatomic, retain) HMDBackingStoreCacheGroup *backingStoreGroup;
@property (nonatomic) HMDCloudCache *cache;
@property (nonatomic) HMDCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool doRecordsExistInCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSMutableDictionary *objectIDToRecordNameMap;
@property (nonatomic, readonly) NSUUID *ownerID;
@property (nonatomic, readonly) NSUUID *parentIdentifier;
@property (nonatomic, readonly) CKRecordID *privateZoneRootRecordID;
@property (nonatomic, readonly) HMDCloudRecord *rootRecord;
@property (nonatomic, readonly) NSString *rootRecordName;
@property (nonatomic, readonly) NSUUID *rootRecordObjectID;
@property (readonly) Class superclass;

+ (void)createGroupWithRootRecordName:(id)arg1 owner:(id)arg2 subscriptionName:(id)arg3 cloudZone:(id)arg4 completion:(id /* block */)arg5;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)__cloudRecordWithObjectID:(id)arg1;
- (void)_cloudRecordsForParentIDs:(id)arg1 recursive:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)addCloudRecord:(id)arg1;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)backingStoreGroup;
- (id)cache;
- (id)cloudRecordWithName:(id)arg1;
- (void)cloudRecordWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudRecordWithObjectID:(id)arg1;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudZone;
- (void)deleteCloudRecord:(id)arg1;
- (void)deleteCloudRecordNames:(id)arg1;
- (id)description;
- (bool)doRecordsExistInCache;
- (void)fetchCloudRecordMap:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithBackingStoreCacheGroup:(id)arg1 cloudZone:(id)arg2;
- (bool)isRootRecord:(id)arg1;
- (bool)isRootRecordName:(id)arg1;
- (id)logIdentifier;
- (id)objectIDToRecordNameMap;
- (id)ownerID;
- (id)parentIdentifier;
- (id)privateZoneRootRecordID;
- (id)rootRecord;
- (void)rootRecordCompletionHandler:(id /* block */)arg1;
- (id)rootRecordModelObject;
- (id)rootRecordName;
- (id)rootRecordObjectID;
- (void)setBackingStoreGroup:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCloudZone:(id)arg1;
- (id)shortDescription;
- (void)updateCloudRecord:(id)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(id /* block */)arg2;

@end
