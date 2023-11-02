
@interface MKFCKSharedHome : MKFCKModel <HMDCoreDataCloudTransformable>

@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSUUID *defaultRoomModelID;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSUUID *flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *ownerAccountHandle;
@property (nonatomic, copy) NSUUID *ownerModelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)createWithModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3;
+ (bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)fetchRequest;
+ (bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)rootKeyPath;

- (id)createLocalModelWithContext:(id)arg1;
- (id)homeModelID;

@end
