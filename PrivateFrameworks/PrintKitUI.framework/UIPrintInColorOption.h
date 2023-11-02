
@interface UIPrintInColorOption : UIPrintOption {
    bool  _canShowColor;
    UISwitch * _printInColorSwitch;
    long long  _savedOutputType;
}

@property (nonatomic) bool canShowColor;
@property (nonatomic, retain) UISwitch *printInColorSwitch;
@property (nonatomic) long long savedOutputType;

- (void).cxx_destruct;
- (bool)canShowColor;
- (void)changePrintInColor:(id)arg1;
- (void)dealloc;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)printInColor;
- (id)printInColorSwitch;
- (id)printOptionTableViewCell;
- (long long)savedOutputType;
- (void)setCanShowColor:(bool)arg1;
- (void)setPrintInColor:(bool)arg1;
- (void)setPrintInColorSwitch:(id)arg1;
- (void)setSavedOutputType:(long long)arg1;
- (bool)shouldShow;
- (id)summary;
- (void)updateFromPrintInfo;

@end
