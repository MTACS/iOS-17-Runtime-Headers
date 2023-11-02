
@protocol FBSServiceFacilityClientHandle_Internal <FBSServiceFacilityClientHandle>

@required

- (<BSXPCServiceConnectionMessaging> *)clientHandle_messageBuilder;
- (NSString *)prettyProcessDescription;

@end
