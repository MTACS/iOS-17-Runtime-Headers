
@protocol FBSServiceFacilityClientConfiguring

@required

- (void)setCalloutQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setEndpoint:(BSServiceConnectionEndpoint *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;

@end
