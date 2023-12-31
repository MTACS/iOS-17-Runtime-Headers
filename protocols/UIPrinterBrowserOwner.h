
@protocol UIPrinterBrowserOwner <NSObject>

@required

- (void)cancelPrinting;
- (void)dismissAnimated:(bool)arg1;
- (bool)filtersPrinters;
- (PKPrinter *)printer;
- (void)printerBrowserViewDidDisappear;
- (void)setPrinter:(PKPrinter *)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@optional

- (void)setUserSelectedPrinter:(bool)arg1;
- (bool)shouldShowPrinter:(PKPrinter *)arg1;

@end
