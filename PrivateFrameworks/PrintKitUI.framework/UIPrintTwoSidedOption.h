
@interface UIPrintTwoSidedOption : UIPrintOption {
    UISwitch * _duplexSwitch;
}

@property (nonatomic, retain) UISwitch *duplexSwitch;

- (void).cxx_destruct;
- (void)changeDuplex:(id)arg1;
- (void)dealloc;
- (id)duplexSwitch;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (void)setDuplexSwitch:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (void)updateFromPrintInfo;

@end
