
@interface TFFeedbackFormPresenter : NSObject <TFFeedbackDataContainerObserver, TFFeedbackDataUpdateProxy> {
    TFFeedbackDataContainer * _dataContainer;
    TFFeedbackForm * _form;
    <TFFeedbackFormPresenterView> * _presenterView;
    TFFeedbackSession * _session;
}

@property (nonatomic, readonly) TFFeedbackDataContainer *dataContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TFFeedbackDataSource> *feedbackDataSource;
@property (nonatomic, readonly) TFFeedbackForm *form;
@property (readonly) unsigned long long hash;
@property (nonatomic) <TFFeedbackFormPresenterView> *presenterView;
@property (nonatomic, readonly) TFFeedbackSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_indexPathsOfVisibleEntriesWithIdentifiers:(id)arg1;
- (id)_indicesOfGroupsWithIdentifiers:(id)arg1;
- (id)dataContainer;
- (void)didUpdateEntry:(id)arg1 toGroupInclusionBool:(bool)arg2;
- (void)didUpdateEntry:(id)arg1 toString:(id)arg2 editInProgress:(bool)arg3;
- (void)feedbackDataContainer:(id)arg1 didUpdateValuesForGroupIdentifiers:(id)arg2 entryIdentifiers:(id)arg3;
- (id)feedbackDataSource;
- (id)footerTextForGroupAtIndex:(long long)arg1;
- (id)footerTextLinkMapForGroupAtIndex:(long long)arg1;
- (id)form;
- (id)headerTextForGroupAtIndex:(long long)arg1;
- (id)headerTextLinkMapForGroupAtIndex:(long long)arg1;
- (id)initWithForm:(id)arg1 dataContainer:(id)arg2 session:(id)arg3;
- (unsigned long long)numberOfEntryGroupsInForm;
- (unsigned long long)numberOfVisibleItemsInGroupAtIndex:(long long)arg1;
- (void)prepareViewForForm;
- (id)presenterView;
- (void)presenterViewDidCancelFeedbackSubmission:(id)arg1;
- (void)presenterViewDidInitiateFeedbackSubmission:(id)arg1;
- (id)session;
- (void)setPresenterView:(id)arg1;
- (void)showSubmissionFailureWithMessage:(id)arg1;
- (id)visibleEntryAtGroupIndex:(long long)arg1 entryIndex:(long long)arg2;

@end
