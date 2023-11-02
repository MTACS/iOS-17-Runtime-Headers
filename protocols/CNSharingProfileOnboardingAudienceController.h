
@protocol CNSharingProfileOnboardingAudienceController <NSObject>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (<CNSharingProfileOnboardingAudienceControllerDelegate> *)delegate;
- (void)setDelegate:(id <CNSharingProfileOnboardingAudienceControllerDelegate>)arg1;

@end
