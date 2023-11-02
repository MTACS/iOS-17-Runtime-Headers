
@interface UIPrintFlipHorizontalOption : UIPrintOption <UIPrintOptionViewDelegate> {
    UISwitch * _flipHorizontalSwitch;
}

@property (nonatomic, retain) UISwitch *flipHorizontalSwitch;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flipHorizontalSelected:(id)arg1;
- (id)flipHorizontalSwitch;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (void)setFlipHorizontalSwitch:(id)arg1;
- (id)summaryString;
- (void)updateFromPrintInfo;

@end
