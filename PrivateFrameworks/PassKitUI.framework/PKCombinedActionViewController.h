
@interface PKCombinedActionViewController : PKDynamicCollectionViewController <PKCombinedSelectActionGroupViewControllerListSectionControllerDelegate, PKCombinedSelectActionViewControllerListSectionControllerDelegate, PKPerformActionViewControllerDelegate, PKRemoteActionGroupViewControllerDelegate> {
    NSArray * _actionGroups;
    PKCombinedSelectActionGroupViewControllerListSectionController * _actionGroupsListController;
    NSArray * _actions;
    PKCombinedSelectActionViewControllerListSectionController * _actionsListController;
    UIColor * _backgroundColor;
    <PKCombinedActionViewControllerDelegate> * _delegate;
    UIColor * _headerBackgroundColor;
    double  _headerHeight;
    PKCollapsibleHeaderView * _headerView;
    PKPaymentPass * _pass;
    PKPassView * _passView;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentPassAction * _selectedAction;
    PKPaymentPassActionGroup * _selectedActionGroup;
    NSString * _subtitleText;
    NSString * _titleText;
    PKTransitBalanceModel * _transitBalanceModel;
    bool  _viewDidAppear;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCombinedActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *headerBackgroundColor;
@property (nonatomic, readonly) PKCollapsibleHeaderView *headerView;
@property (nonatomic, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIFont *titleFont;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)backgroundColor;
- (id)delegate;
- (void)didSelectAction:(id)arg1;
- (void)didSelectActionGroup:(id)arg1;
- (id)headerBackgroundColor;
- (id)headerImage;
- (id)headerView;
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4 balanceModel:(id)arg5;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)remoteGroupActionsViewControllerDidCancel:(id)arg1;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderBackgroundColor:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (id)titleFont;
- (id)titleText;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
