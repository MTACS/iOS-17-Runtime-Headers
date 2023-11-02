
@interface UIPrintScalingSection : UIPrintOptionSection {
    UIPrintScaleDownOnlyOption * _scaleDownOnlyPrintOption;
    UIPrintScaleToFitOption * _scaleToFitPrintOption;
}

@property (nonatomic, retain) UIPrintScaleDownOnlyOption *scaleDownOnlyPrintOption;
@property (nonatomic, retain) UIPrintScaleToFitOption *scaleToFitPrintOption;

- (void).cxx_destruct;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)scaleDownOnlyPrintOption;
- (void)scaleToFitChanged;
- (id)scaleToFitPrintOption;
- (void)setScaleDownOnlyPrintOption:(id)arg1;
- (void)setScaleToFitPrintOption:(id)arg1;
- (bool)updatePrintOptionsList;

@end
