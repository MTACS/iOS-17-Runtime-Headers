
@interface CKStickerDetailViewController : UIViewController <CKAdaptivePresentedControllerProtocol, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _chatItems;
    <CKStickerDetailViewControllerDelegate> * _delegate;
    bool  _preserveModalPresentationStyle;
    UITableView * _tableView;
    UIVisualEffectView * _visualEffectView;
    bool  _wantsWindowedPresentation;
}

@property (nonatomic, retain) NSArray *chatItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKStickerDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic) bool shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;
@property (nonatomic) bool wantsWindowedPresentation;

- (void).cxx_destruct;
- (id)_deleteSwipeActionForIndexPath:(id)arg1;
- (void)_viewButtonTapped:(id)arg1;
- (id)chatItems;
- (bool)constrainToPresentingVCBounds;
- (id)delegate;
- (void)deleteStickerAtIndexPath:(id)arg1;
- (id)initWithStickerChatItems:(id)arg1;
- (void)loadView;
- (bool)preserveModalPresentationStyle;
- (void)setChatItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldHideViewButtonInStickerDetailsForIdentifier:(id)arg1;
- (void)stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (id)visualEffectView;
- (bool)wantsWindowedPresentation;

@end
