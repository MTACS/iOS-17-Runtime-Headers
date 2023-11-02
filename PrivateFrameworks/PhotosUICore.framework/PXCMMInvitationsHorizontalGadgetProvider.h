
@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXForYouRankable, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXCMMInvitationsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    PXLibraryFilterState * _libraryFilterState;
    <PXCMMWorkflowPresenting> * _workflowPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long forYouContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXCMMWorkflowPresenting> *workflowPresenter;

- (void).cxx_destruct;
- (void)_configureDataSourceManager;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)forYouContentIdentifier;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithWorkflowPresenter:(id)arg1 libraryFilterState:(id)arg2;
- (id)libraryFilterState;
- (void)loadDataForGadgets;
- (id)mostRecentContentDate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)workflowPresenter;

@end
