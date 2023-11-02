
@interface MKFCKSharedUserAccessorySettings : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (nonatomic, copy) NSUUID *accessoryModelID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool listeningHistoryEnabled;
@property (nonatomic) bool mediaContentProfileEnabled;
@property (nonatomic) bool personalRequestsEnabled;
@property (nonatomic, retain) MKFCKSharedUserDataRoot *root;
@property (readonly) Class superclass;

+ (id)createWithHomeModelID:(id)arg1 accessoryModelID:(id)arg2 persistentStore:(id)arg3 context:(id)arg4;
+ (bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)fetchRequest;
+ (bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;

- (bool)_importIntoLocalUserModel:(id)arg1 context:(id)arg2;
- (bool)_importWithContext:(id)arg1;
- (bool)importIntoLocalUserModel:(id)arg1 context:(id)arg2;

@end
