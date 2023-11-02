
@interface PSUIConvertToESIMSpecifier : PSSpecifier <PSUILocalConvertModelDelegate, TSSIMSetupDelegate> {
    NSString * _carrierName;
    TSSIMSetupFlow * _flow;
    PSListController * _hostController;
    NSString * _iccid;
    bool  _isViewControllerPopNeeded;
    UINavigationController * _navigationController;
    NSString * _phoneNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_convertToeSIM;
- (void)_showWifiAlert;
- (void)convertToeSIMCellPressed:(id)arg1;
- (void)dealloc;
- (id)getLogger;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(bool)arg4 iccid:(id)arg5;
- (void)odcCanceled:(id)arg1;
- (void)odcFailed:(id)arg1;
- (void)odcSuccess:(id)arg1 isViewControllerPopNeeded:(bool)arg2;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;

@end
