
@interface VSOnboardingInfoCenter : NSObject

@property (nonatomic, readonly, copy) NSString *localizedButtonTitle;

- (id)localizedButtonTitle;
- (void)presentDetailsFromViewController:(id)arg1;
- (id)tvAppPrivacyButtonViewController;
- (id)tvProviderPrivacyButtonViewController;

@end
