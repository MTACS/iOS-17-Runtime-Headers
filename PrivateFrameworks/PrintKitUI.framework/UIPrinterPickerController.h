
@interface UIPrinterPickerController : NSObject {
    id /* block */  _completionHandler;
    <UIPrinterPickerControllerDelegate> * _delegate;
    UIPrinter * _selectedPrinter;
    id  _state;
}

@property (nonatomic) <UIPrinterPickerControllerDelegate> *delegate;
@property (nonatomic, retain) UIPrinter *selectedPrinter;

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;

- (void).cxx_destruct;
- (bool)_delegateFiltersPrinters;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (bool)_setupPickerPanel:(id /* block */)arg1;
- (bool)_shouldShowPrinter:(id)arg1;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (id)initWithInitiallySelectedPrinter:(id)arg1;
- (bool)presentAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)presentAnimated:(bool)arg1 hostingScene:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)presentFromBarButtonItem:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)selectedPrinter;
- (void)setDelegate:(id)arg1;
- (void)setSelectedPrinter:(id)arg1;

@end
