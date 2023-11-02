
@interface CSDeviceUnblockViewController : UIViewController {
    UILabel * _bodyLabel;
    CSDeviceUnblockViewModel * _viewModel;
}

- (void).cxx_destruct;
- (void)_addHeaderCancelIfNeededToStack:(id)arg1;
- (id)_addLabelWithText:(id)arg1 color:(id)arg2 font:(id)arg3 toStack:(id)arg4;
- (void)_addSystemImageWithName:(id)arg1 toStack:(id)arg2;
- (bool)_canShowWhileLocked;
- (id)initWithViewModel:(id)arg1;
- (void)setTimeoutString:(id)arg1;
- (void)viewDidLoad;

@end
