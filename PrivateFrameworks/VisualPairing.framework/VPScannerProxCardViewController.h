
@interface VPScannerProxCardViewController : UIViewController {
    id /* block */  _scannedCodeHandler;
    VPScannerView * _scannerView;
}

@property (nonatomic, copy) id /* block */ scannedCodeHandler;
@property (nonatomic, retain) VPScannerView *scannerView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id /* block */)scannedCodeHandler;
- (id)scannerView;
- (void)setScannedCodeHandler:(id /* block */)arg1;
- (void)setScannerView:(id)arg1;
- (void)start;
- (void)stop;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
