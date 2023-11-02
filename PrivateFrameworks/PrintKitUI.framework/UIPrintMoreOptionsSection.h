
@interface UIPrintMoreOptionsSection : UIPrintOptionSection {
    UIPrintAccountInfoOption * _accountInfoPrintOption;
    UIPrintInColorOption * _blackWhiteOption;
    UIPrintCopiesOption * _copiesOption;
    UIPrintImagePDFAnnotationsOption * _imagePDFAnnotationsPrintOption;
    UIPrintOrientationOption * _orientationPrintOption;
    UIPrintPageRangeOption * _pageRangeOption;
    UIPrintPaperSizeOption * _paperSizePrintOption;
    UIPrintScalingOption * _scalingPrintOption;
    UIPrintTwoSidedOption * _twoSidedOption;
}

@property (nonatomic, retain) UIPrintAccountInfoOption *accountInfoPrintOption;
@property (nonatomic, retain) UIPrintInColorOption *blackWhiteOption;
@property (nonatomic, retain) UIPrintCopiesOption *copiesOption;
@property (nonatomic, retain) UIPrintImagePDFAnnotationsOption *imagePDFAnnotationsPrintOption;
@property (nonatomic, retain) UIPrintOrientationOption *orientationPrintOption;
@property (nonatomic, retain) UIPrintPageRangeOption *pageRangeOption;
@property (nonatomic, retain) UIPrintPaperSizeOption *paperSizePrintOption;
@property (nonatomic, retain) UIPrintScalingOption *scalingPrintOption;
@property (nonatomic, retain) UIPrintTwoSidedOption *twoSidedOption;

- (void).cxx_destruct;
- (id)accountInfoPrintOption;
- (id)blackWhiteOption;
- (id)copiesOption;
- (void)dismissKeyboard;
- (id)imagePDFAnnotationsPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (bool)keyboardShowing;
- (id)orientationPrintOption;
- (id)pageRangeOption;
- (id)paperSizePrintOption;
- (id)scalingPrintOption;
- (void)setAccountInfoPrintOption:(id)arg1;
- (void)setBlackWhiteOption:(id)arg1;
- (void)setCopiesOption:(id)arg1;
- (void)setImagePDFAnnotationsPrintOption:(id)arg1;
- (void)setOrientationPrintOption:(id)arg1;
- (void)setPageRangeOption:(id)arg1;
- (void)setPaperSizePrintOption:(id)arg1;
- (void)setScalingPrintOption:(id)arg1;
- (void)setTwoSidedOption:(id)arg1;
- (id)twoSidedOption;
- (bool)updatePrintOptionsList;

@end
