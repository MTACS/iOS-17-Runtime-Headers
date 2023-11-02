
@interface PXHorizontalContentSyndicationGadgetProvider : PXGadgetProvider <PXChangeObserver, PXCollectionsDataSourceManagerObserver, PXForYouRankable> {
    PXContentSyndicationDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    PXLibraryFilterState * _libraryFilterState;
}

@property (nonatomic, readonly) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didGenerateGadgets;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDataSourceManager;
- (void)_configureDataSourceManagerIfNecessary;
- (void)_presentSeeAllViewControllerForGadget:(id)arg1 animated:(bool)arg2;
- (void)_updateGadgets;
- (id)dataSourceManager;
- (bool)didGenerateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithLibraryFilterState:(id)arg1;
- (id)libraryFilterState;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)ppt_presentSeeAllViewController;

@end
