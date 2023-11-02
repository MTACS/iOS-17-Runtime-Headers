
@protocol CNSharingProfileOnboardingAudienceControllerDelegate <NSObject>

@required

- (void)audienceController:(id <CNSharingProfileOnboardingAudienceController>)arg1 didFinishWithContact:(CNContact *)arg2 sharingAudience:(unsigned long long)arg3;

@optional

- (void)audienceControllerDidTapSetupLater:(id <CNSharingProfileOnboardingAudienceController>)arg1;

@end
