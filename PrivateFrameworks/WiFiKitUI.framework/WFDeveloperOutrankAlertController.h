
@interface WFDeveloperOutrankAlertController : WFPromptAlertController {
    NSString * _okButtonTitle;
    NSString * _settingButtonTitle;
}

@property (nonatomic, copy) NSString *okButtonTitle;
@property (nonatomic, copy) NSString *settingButtonTitle;

+ (id)developerOutrankAlertControllerWithNetworkName:(id)arg1 chinaDevice:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)messageForChinaDevice:(bool)arg1;
+ (id)okButtonTitle;
+ (id)settingsButtonTitle;
+ (id)titleForNetworkName:(id)arg1 chinaDevice:(bool)arg2;

- (void).cxx_destruct;
- (id)okButtonTitle;
- (void)setOkButtonTitle:(id)arg1;
- (void)setSettingButtonTitle:(id)arg1;
- (id)settingButtonTitle;

@end
