
@interface PXSharedLibrarySharingSuggestionsGadgetProvider : PXGadgetProvider <PXForYouRankable, PXSectionedDataSourceManagerObserver> {
    PXSharedLibrarySharingSuggestionsCountsManager * _countsManager;
    PXSharedLibrarySharingSuggestionsDataSourceManager * _dataSourceManager;
    PXFeedGadget * _feedGadget;
    PXLibraryFilterState * _libraryFilterState;
    bool  _wantsGadgets;
}

@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsCountsManager *countsManager;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedGadget *feedGadget;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsGadgets;

- (void).cxx_destruct;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;
- (id)countsManager;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)feedGadget;
- (long long)forYouContentIdentifier;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithLibraryFilterState:(id)arg1;
- (id)libraryFilterState;
- (id)mostRecentContentDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setFeedGadget:(id)arg1;
- (void)setWantsGadgets:(bool)arg1;
- (bool)wantsGadgets;

@end
