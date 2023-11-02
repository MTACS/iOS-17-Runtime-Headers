
@interface UIPrintPageRangeOption : UIPrintOption <UIPrintOptionViewDelegate> {
    NSString * _multiPageRangeTitle;
    UIPrintRangeView * _pageRangeView;
}

@property (nonatomic, retain) NSString *multiPageRangeTitle;
@property (nonatomic, retain) UIPrintRangeView *pageRangeView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;
- (id)multiPageRangeTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageRangeView;
- (void)pdfChanged:(id)arg1;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (void)setMultiPageRangeTitle:(id)arg1;
- (void)setPageRangeView:(id)arg1;
- (bool)shouldShow;
- (id)summary;
- (void)updateFromPrintInfo;

@end
