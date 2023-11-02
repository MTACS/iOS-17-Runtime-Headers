
@protocol HMDMobileGestaltClient <NSObject>

@required

- (bool)supportsReceivingARCStreamOverAirPlay;
- (bool)supportsSiriHub;

@end
