
@interface UIPrintImagePDFAnnotationsOption : UIPrintOption {
    UISwitch * _imagePDFAnnotationsSwitch;
}

@property (nonatomic, retain) UISwitch *imagePDFAnnotationsSwitch;

- (void).cxx_destruct;
- (void)changeImagePDFAnnotations:(id)arg1;
- (void)dealloc;
- (id)imagePDFAnnotationsSwitch;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionTableViewCell;
- (void)setImagePDFAnnotationsSwitch:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (void)updateFromPrintInfo;

@end
