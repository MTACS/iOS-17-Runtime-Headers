
@interface HMDCloudLegacyModelObject : HMDBackingStoreModelObject

@property (nonatomic, retain) NSData *data1;
@property (nonatomic, retain) NSData *data2;
@property (nonatomic, retain) NSNumber *legacyRecordType;

+ (id)properties;

@end
