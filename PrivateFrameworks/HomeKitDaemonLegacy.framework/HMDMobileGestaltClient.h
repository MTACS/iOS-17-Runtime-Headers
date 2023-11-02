
@interface HMDMobileGestaltClient : HMFObject <HMDMobileGestaltClient>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool supportsReceivingARCStreamOverAirPlay;
@property (readonly) bool supportsSiriHub;

- (bool)supportsReceivingARCStreamOverAirPlay;
- (bool)supportsSiriHub;

@end
