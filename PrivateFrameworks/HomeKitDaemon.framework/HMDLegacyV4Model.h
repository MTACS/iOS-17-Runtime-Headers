
@interface HMDLegacyV4Model : HMDLegacyModel

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id*)arg3;
+ (Class)hmbModelClassForHMDModelClass:(Class)arg1;
+ (id)hmbProperties;

- (id)convertToHMDModelObject;
- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id*)arg4;
- (id)hmbType;

@end
