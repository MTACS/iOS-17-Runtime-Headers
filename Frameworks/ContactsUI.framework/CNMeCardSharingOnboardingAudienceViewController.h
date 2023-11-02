
@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController <UITableViewDataSource, UITableViewDelegate> {
    <CNMeCardSharingOnboardingAudienceViewControllerDelegate> * _delegate;
    CNMeCardSharingOnboardingHeaderViewController * _headerViewController;
    CNMeCardSharingAudienceDataSource * _sharingAudienceDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingOnboardingAudienceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (nonatomic, retain) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource;
@property (readonly) Class superclass;

+ (id)headerText;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleConfirmButtonTapped;
- (id)headerViewController;
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setSharingAudienceDataSource:(id)arg1;
- (id)sharingAudienceDataSource;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
