
@interface HMDHomeManagerHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDHomeManagerHomeHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cd_entityClass;
+ (id)cd_parentReferenceName;
+ (id)deriveUUIDFromHomeUUID:(id)arg1;
+ (id)modelForHomeUUID:(id)arg1;
+ (id)properties;

@end
