
@interface SBSUserNotificationSystemApertureContentDefinition : NSObject {
    NSString * _alertHeader;
    SBSUserNotificationColorDefinition * _alertHeaderColor;
    NSString * _alertMessage;
    NSNumber * _alertTextAlignment;
    NSString * _alternateButtonTitle;
    NSString * _defaultButtonTitle;
    SBSUserNotificationColorDefinition * _keyColor;
    SBSUserNotificationAssetDefinition * _leadingAssetDefinition;
    bool  _preventsAutomaticDismissal;
}

@property (nonatomic, copy) NSString *alertHeader;
@property (nonatomic, copy) SBSUserNotificationColorDefinition *alertHeaderColor;
@property (nonatomic, copy) NSString *alertHeaderColorName;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSNumber *alertTextAlignment;
@property (nonatomic, copy) NSString *alternateButtonTitle;
@property (nonatomic, copy) NSString *defaultButtonTitle;
@property (nonatomic, copy) SBSUserNotificationColorDefinition *keyColor;
@property (nonatomic, copy) NSString *keyColorName;
@property (nonatomic, copy) SBSUserNotificationAssetDefinition *leadingAssetDefinition;
@property (nonatomic, copy) SBSUserNotificationImageDefinition *leadingImageDefinition;
@property (nonatomic) bool preventsAutomaticDismissal;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)alertHeader;
- (id)alertHeaderColor;
- (id)alertHeaderColorName;
- (id)alertMessage;
- (id)alertTextAlignment;
- (id)alternateButtonTitle;
- (id)build;
- (id)defaultButtonTitle;
- (id)keyColor;
- (id)keyColorName;
- (id)leadingAssetDefinition;
- (id)leadingImageDefinition;
- (bool)preventsAutomaticDismissal;
- (void)setAlertHeader:(id)arg1;
- (void)setAlertHeaderColor:(id)arg1;
- (void)setAlertHeaderColorName:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTextAlignment:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setKeyColorName:(id)arg1;
- (void)setLeadingAssetDefinition:(id)arg1;
- (void)setLeadingImageDefinition:(id)arg1;
- (void)setPreventsAutomaticDismissal:(bool)arg1;

@end
