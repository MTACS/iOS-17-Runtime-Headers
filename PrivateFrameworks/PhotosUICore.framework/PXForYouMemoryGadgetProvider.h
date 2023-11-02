
@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXForYouRankable, PXSectionedDataSourceManagerObserver> {
    <PXMemoryForYouDataSourceManager> * _dataSourceManager;
    PXLibraryFilterState * _libraryFilterState;
    bool  _wantsGadgets;
}

@property (nonatomic, readonly) <PXMemoryForYouDataSourceManager> *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsGadgets;

+ (unsigned long long)maxMemoriesToFetch;

- (void).cxx_destruct;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithLibraryFilterState:(id)arg1;
- (id)libraryFilterState;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setWantsGadgets:(bool)arg1;
- (bool)wantsGadgets;

@end
