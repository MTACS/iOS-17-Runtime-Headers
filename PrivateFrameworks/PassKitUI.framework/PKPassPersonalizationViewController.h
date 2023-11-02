
@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationTermsViewControllerDelegate> {
    NSArray * _cellContexts;
    PKContact * _contact;
    <PKPassPersonalizationViewControllerDelegate> * _delegate;
    bool  _hasScrolledToCells;
    PKPassPersonalizationHeaderView * _headerView;
    PKPass * _pass;
    unsigned long long  _personalizationSource;
    NSString * _personalizationToken;
    UIButton * _personalizeLaterButton;
    UIBarButtonItem * _personalizeNowButton;
    OBPrivacyLinkController * _privacyController;
    bool  _termsAndConditionsAccepted;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureHeaderViewForState:(unsigned long long)arg1;
- (bool)_contactReadyForPersonalization;
- (id)_nextCellForIndexPath:(id)arg1;
- (void)_personalizeNowButtonPressed:(id)arg1;
- (void)_personalizePass;
- (void)_positionFooterView;
- (void)_presentPersonalizationErrorAlert;
- (void)_scrollToCellsIfNeeded;
- (id)delegate;
- (void)finishPersonalizationOfPassWithUniqueID:(id)arg1 result:(bool)arg2;
- (id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(unsigned long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1;
- (void)personalizationCellDidChangeValue:(id)arg1;
- (bool)personalizationCellShouldBeginEditing:(id)arg1;
- (bool)personalizationCellShouldReturn:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
