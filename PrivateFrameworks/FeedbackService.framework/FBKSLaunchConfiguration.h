
@interface FBKSLaunchConfiguration : NSObject {
    bool  _alwaysUseRemoteAlertController;
    NSString * _localizedAlertViewDeclineButtonTitle;
    NSString * _localizedAlertViewProceedButtonTitle;
    NSString * _localizedPromptMessage;
    NSString * _localizedPromptTitle;
    bool  _notifyImmediately;
    long long  _promptStyle;
    bool  _skipsPrompt;
    FBKSLaunchConfiguration_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic, readonly) id _swiftObject;
@property (nonatomic) bool alwaysUseRemoteAlertController;
@property (nonatomic, copy) NSString *localizedAlertViewDeclineButtonTitle;
@property (nonatomic, copy) NSString *localizedAlertViewProceedButtonTitle;
@property (nonatomic, copy) NSString *localizedPromptMessage;
@property (nonatomic, copy) NSString *localizedPromptTitle;
@property (nonatomic) bool notifyImmediately;
@property (nonatomic) long long promptStyle;
@property (nonatomic) bool skipsPrompt;
@property (nonatomic, retain) FBKSLaunchConfiguration_FrameworkPrivateName *swiftObject;

- (void).cxx_destruct;
- (id)_swiftObject;
- (bool)alwaysUseRemoteAlertController;
- (id)init;
- (id)localizedAlertViewDeclineButtonTitle;
- (id)localizedAlertViewProceedButtonTitle;
- (id)localizedPromptMessage;
- (id)localizedPromptTitle;
- (bool)notifyImmediately;
- (long long)promptStyle;
- (void)setAlwaysUseRemoteAlertController:(bool)arg1;
- (void)setLocalizedAlertViewDeclineButtonTitle:(id)arg1;
- (void)setLocalizedAlertViewProceedButtonTitle:(id)arg1;
- (void)setLocalizedPromptMessage:(id)arg1;
- (void)setLocalizedPromptTitle:(id)arg1;
- (void)setNotifyImmediately:(bool)arg1;
- (void)setPromptStyle:(long long)arg1;
- (void)setSkipsPrompt:(bool)arg1;
- (void)setSwiftObject:(id)arg1;
- (bool)skipsPrompt;
- (id)swiftObject;

@end
