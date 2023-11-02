
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable <NSObject>

@required

+ (Class)cd_modelClass;

@optional

- (NSUUID *)hmd_modelID;
- (NSArray *)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(bool)arg2 createManagedObject:(bool)arg3 error:(id*)arg4;
- (NSArray *)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(bool)arg2 error:(id*)arg3;
- (NSUUID *)hmd_parentModelID;

@end
