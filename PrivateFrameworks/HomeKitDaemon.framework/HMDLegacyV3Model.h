
@interface HMDLegacyV3Model : HMDLegacyModel

@property (nonatomic, retain) NSData *cloudBlob;

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id*)arg3;
+ (id)hmbProperties;

- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id*)arg4;
- (id)init;

@end
