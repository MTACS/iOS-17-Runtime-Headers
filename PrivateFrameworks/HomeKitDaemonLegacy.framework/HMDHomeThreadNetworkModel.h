
@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSString *threadNetworkID;

+ (id)defaultModelForHome:(id)arg1;
+ (id)defaultModelForHomeUUID:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelIDForHomeUUID:(id)arg1;
+ (id)properties;

@end
