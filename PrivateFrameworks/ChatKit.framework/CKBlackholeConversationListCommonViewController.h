
@interface CKBlackholeConversationListCommonViewController : UITableViewController <UITableViewDelegate> {
    UIBarButtonItem * _clearAllButton;
    UILabel * _emptyConversationListLabel;
    _UITableViewDiffableDataSource * _tableViewDataSource;
    CKScheduledUpdater * _updater;
    NSArray * _visibleConversations;
}

@property (nonatomic, retain) UIBarButtonItem *clearAllButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *emptyConversationListLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UITableViewDiffableDataSource *tableViewDataSource;
@property (nonatomic, retain) CKScheduledUpdater *updater;
@property (nonatomic, retain) NSArray *visibleConversations;

- (void).cxx_destruct;
- (id)_alertTitleForClearAll;
- (id)_alertTitleForDelete;
- (void)_batchDeleteConversationWithCompletionHandler:(id /* block */)arg1;
- (void)_clearAllTapped;
- (void)_clearAllTappedWithCompletionHandler:(id /* block */)arg1;
- (void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_conversationList;
- (id)_conversations;
- (void)_deleteConversation:(id)arg1;
- (void)_deleteConversation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_updateConversationList;
- (void)_updateConversationListEmptyLabel;
- (id)clearAllButton;
- (void)dealloc;
- (void)didLock;
- (void)didUnlock;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didWake;
- (id)emptyConversationListLabel;
- (void)encodeWithCoder:(id)arg1;
- (void)endHoldingConversationListUpdatesForKey:(id)arg1;
- (id)init;
- (void)popViewControllerIfNecessary;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setClearAllButton:(id)arg1;
- (void)setEmptyConversationListLabel:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setTableViewDataSource:(id)arg1;
- (void)setUpdater:(id)arg1;
- (void)setVisibleConversations:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)suspend;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableViewDataSource;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (id)updater;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleConversations;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)willUnlock;

@end
