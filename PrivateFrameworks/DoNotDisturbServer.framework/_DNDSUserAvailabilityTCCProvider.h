
@interface _DNDSUserAvailabilityTCCProvider : NSObject <DNDSUserAvailabilityTCCProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)userAvailabilityTCCApprovedBundleIds;

@end
