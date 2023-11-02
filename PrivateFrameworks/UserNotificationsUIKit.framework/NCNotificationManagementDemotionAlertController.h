
@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController {
    bool  _includeExplanation;
}

@property (nonatomic) bool includeExplanation;

- (void)_configureView;
- (bool)includeExplanation;
- (id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 includeExplanation:(bool)arg4;
- (void)setIncludeExplanation:(bool)arg1;

@end
