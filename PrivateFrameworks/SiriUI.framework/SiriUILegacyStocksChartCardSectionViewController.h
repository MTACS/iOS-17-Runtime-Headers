
@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController * _snippetViewController;
}

@property (nonatomic, retain) SiriUICardSectionView *view;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (void)_loadCardSectionView;
- (bool)_shouldRenderButtonOverlay;
- (void)_updateContentSize;
- (void)viewDidLayoutSubviews;

@end
