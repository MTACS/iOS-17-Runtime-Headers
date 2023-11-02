
@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject <HMDCoreDataCloudTransformable, HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addToUpdates:(id)arg1 objectID:(id)arg2 properties:(id)arg3;
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;
+ (bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;
+ (bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;
+ (bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;
+ (id)logCategory;
+ (id)new;

- (id)createLocalModelWithContext:(id)arg1;
- (id)fetchLocalModelWithContext:(id)arg1;
- (id)init;

@end
