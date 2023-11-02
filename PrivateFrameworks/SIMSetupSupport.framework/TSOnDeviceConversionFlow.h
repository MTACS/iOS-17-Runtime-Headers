
@interface TSOnDeviceConversionFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _carrierName;
    NSString * _phoneNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;

@end
