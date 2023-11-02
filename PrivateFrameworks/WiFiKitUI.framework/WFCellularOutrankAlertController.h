
@interface WFCellularOutrankAlertController : WFPromptAlertController {
    NSString * _cancelButtonTitle;
    NSString * _defaultButtonTitle;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSString *defaultButtonTitle;

+ (id)cancelButtonTitleForPrivateCellular:(bool)arg1;
+ (id)cellularOutrankAlertControllerWithNetworkName:(id)arg1 chinaDevice:(bool)arg2 privateCellular:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)defaultButtonTitleForChinaDevice:(bool)arg1;
+ (id)messageForChinaDevice:(bool)arg1 privateCellular:(bool)arg2;
+ (id)titleForNetworkName:(id)arg1 chinaDevice:(bool)arg2 privateCellular:(bool)arg3;

- (void).cxx_destruct;
- (id)cancelButtonTitle;
- (id)defaultButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;

@end
