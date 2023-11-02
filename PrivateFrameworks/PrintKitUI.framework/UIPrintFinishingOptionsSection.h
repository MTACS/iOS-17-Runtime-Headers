
@interface UIPrintFinishingOptionsSection : UIPrintOptionSection {
    UIPrintFinishingsOption * _finishingPrintOption;
}

@property (nonatomic, retain) UIPrintFinishingsOption *finishingPrintOption;

- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)dealloc;
- (void)didSelectPrintOptionSection;
- (id)finishingPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setFinishingPrintOption:(id)arg1;
- (bool)updatePrintOptionsList;

@end
