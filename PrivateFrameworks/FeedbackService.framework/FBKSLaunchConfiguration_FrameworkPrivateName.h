
@interface FBKSLaunchConfiguration_FrameworkPrivateName : NSObject {
    void alwaysLaunchInRemoteAlert;
    void localizedAlertViewDeclineButtonTitle;
    void localizedAlertViewProceedButtonTitle;
    void localizedPromptMessage;
    void localizedPromptTitle;
    void notifyImmediately;
    void promptStyle;
    void skipsPrompt;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic, copy) NSString *localizedAlertViewDeclineButtonTitle;
@property (nonatomic, copy) NSString *localizedAlertViewProceedButtonTitle;
@property (nonatomic, copy) NSString *localizedPromptMessage;
@property (nonatomic, copy) NSString *localizedPromptTitle;
@property (nonatomic) long long promptStyle;

+ (id)fromJSONWithData:(id)arg1;

- (void).cxx_destruct;
- (id)asJSON;
- (id)init;
- (id)localizedAlertViewDeclineButtonTitle;
- (id)localizedAlertViewProceedButtonTitle;
- (id)localizedPromptMessage;
- (id)localizedPromptTitle;
- (long long)promptStyle;
- (void)setAlwaysLaunchInRemoteAlert:(bool)arg1;
- (void)setLocalizedAlertViewDeclineButtonTitle:(id)arg1;
- (void)setLocalizedAlertViewProceedButtonTitle:(id)arg1;
- (void)setLocalizedPromptMessage:(id)arg1;
- (void)setLocalizedPromptTitle:(id)arg1;
- (void)setNotifyImmediately:(bool)arg1;
- (void)setPromptStyle:(long long)arg1;
- (void)setToSkipPrompt:(bool)arg1;

@end
