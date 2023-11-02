
@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSArray *accessoryModelIDs;
@property (nonatomic, copy) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (nonatomic, retain) NSString *changeTag;
@property (nonatomic, copy) NSNumber *enabled;
@property (nonatomic, copy) NSNumber *options;
@property (nonatomic, copy) NSArray *siriEndpointAccessoryModelUUIDs;

+ (id)properties;

- (id)dependentUUIDs;

@end
