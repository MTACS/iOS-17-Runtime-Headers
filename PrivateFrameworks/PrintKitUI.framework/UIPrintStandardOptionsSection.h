
@interface UIPrintStandardOptionsSection : UIPrintOptionSection {
    UIPrintPresetsOption * _presetsOption;
    UIPrinterSelectionOption * _printerSelectionOption;
}

@property (nonatomic, retain) UIPrintPresetsOption *presetsOption;
@property (nonatomic, retain) UIPrinterSelectionOption *printerSelectionOption;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)presetsOption;
- (id)printerSelectionOption;
- (void)setPresetsOption:(id)arg1;
- (void)setPrinterSelectionOption:(id)arg1;
- (void)setShowContactingPrinter:(bool)arg1;
- (bool)updatePrintOptionsList;

@end
