
@interface HMDAssistantAccessControlModelV2 : HMBModel

@property (nonatomic, copy) NSArray *accessoryUUIDs;
@property (nonatomic, copy) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (nonatomic, copy) NSNumber *requiresAuthenticationForSecureRequests;
@property (nonatomic, copy) NSArray *siriEndpointAccessoryUUIDs;

+ (id)hmbProperties;

@end
