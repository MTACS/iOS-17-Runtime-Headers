
@interface UIPrinterSelectionOption : UIPrintOption <UIPrinterBrowserOwner> {
    UIPrinterBrowserViewController * _browserController;
    bool  _contactingPrinter;
}

@property (nonatomic, retain) UIPrinterBrowserViewController *browserController;
@property (nonatomic) bool contactingPrinter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPrinter *printer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)browserController;
- (void)cancelPrinting;
- (bool)contactingPrinter;
- (void)didSelectPrintOption;
- (void)dismissAnimated:(bool)arg1;
- (bool)filtersPrinters;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)printOptionTableViewCell;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (id)printerDisplayName:(id)arg1;
- (void)setBrowserController:(id)arg1;
- (void)setContactingPrinter:(bool)arg1;
- (void)setPrinter:(id)arg1;
- (void)setShowContactingPrinter:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showContacting;
- (id)summary;
- (unsigned long long)supportedInterfaceOrientations;

@end
