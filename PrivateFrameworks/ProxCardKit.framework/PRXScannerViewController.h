
@interface PRXScannerViewController : PRXCardContentViewController {
    PRXScannerIndicatorView * _indicatorView;
    UIViewController * _scannerEngine;
}

@property (nonatomic, readonly) PRXScannerIndicatorView *indicatorView;
@property (nonatomic, readonly) UIViewController *scannerEngine;

- (void).cxx_destruct;
- (id)indicatorView;
- (id)initWithScannerEngine:(id)arg1;
- (void)resetConfirmationRing;
- (id)scannerEngine;
- (void)showConfirmationRing;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
