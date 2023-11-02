
@interface MediaControlsLanguageOptionsViewController : UIViewController <MPRequestResponseControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate> {
    <MediaControlsLanguageOptionsViewControllerDelegate> * _delegate;
    NSArray * _languageOptionGroups;
    UIView * _materialView;
    MPRequestResponseController * _requestResponseController;
    MPAVClippingTableView * _tableView;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsLanguageOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *languageOptionGroups;
@property (nonatomic, retain) UIView *materialView;
@property (nonatomic, retain) MPRequestResponseController *requestResponseController;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPAVClippingTableView *tableView;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (id)delegate;
- (id)initWithRouteUID:(id)arg1;
- (id)languageOptionGroups;
- (id)materialView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)requestResponseController;
- (void)setDelegate:(id)arg1;
- (void)setLanguageOptionGroups:(id)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setRequestResponseController:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visualStylingProvider;

@end
