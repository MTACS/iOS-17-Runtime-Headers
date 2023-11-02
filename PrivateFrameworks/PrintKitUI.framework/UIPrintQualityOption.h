
@interface UIPrintQualityOption : UIPrintOption <UIPrintOptionViewDelegate> {
    NSArray * _printQualities;
    UIPrintQualityView * _printQualityView;
    NSArray * _qualities;
}

@property (nonatomic, retain) NSArray *printQualities;
@property (nonatomic, retain) UIPrintQualityView *printQualityView;
@property (nonatomic, retain) NSArray *qualities;

- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (id)printQualities;
- (id)printQualityView;
- (id)qualities;
- (void)setPrintQualities:(id)arg1;
- (void)setPrintQualityView:(id)arg1;
- (void)setQualities:(id)arg1;
- (id)shortSummary;
- (bool)shouldShow;
- (id)summary;
- (id)summaryString;
- (void)updateFromPrintInfo;

@end
