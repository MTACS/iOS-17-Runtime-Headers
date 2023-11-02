
@interface PopoverCatalogViewController : AbstractCatalogViewController {
    CatalogViewController * _primaryCatalogViewController;
    double  _startPagePreferredHeight;
}

@property (nonatomic) CatalogViewController *primaryCatalogViewController;

- (void).cxx_destruct;
- (double)_preferredHeightForStartPage;
- (id)completionsViewController;
- (id)completionsViewControllerIfLoaded;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)didGainOwnershipOfStartPageViewController;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (double)maxContentHeight;
- (id)primaryCatalogViewController;
- (double)requiredContentWidth;
- (void)resetStartPagePreferredHeight;
- (void)setPrimaryCatalogViewController:(id)arg1;
- (id)startPageViewController;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)updateStartPagePreferredContentSize;
- (void)viewWillLayoutSubviews;

@end
