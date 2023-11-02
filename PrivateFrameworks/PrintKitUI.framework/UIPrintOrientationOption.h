
@interface UIPrintOrientationOption : UIPrintOption {
    UISegmentedControl * _orientationSegmentedControl;
}

@property (nonatomic, retain) UISegmentedControl *orientationSegmentedControl;

- (void).cxx_destruct;
- (void)changeOrientation:(id)arg1;
- (void)dealloc;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)orientationSegmentedControl;
- (id)printOptionTableViewCell;
- (void)setOrientationSegmentedControl:(id)arg1;
- (id)summary;
- (void)updateFromPrintInfo;

@end
