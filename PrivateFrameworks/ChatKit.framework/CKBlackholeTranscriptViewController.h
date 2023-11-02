
@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    CKConversation * _conversation;
    STConversationContext * _conversationContext;
    UITextView * _headerTextView;
    bool  _isShowingLockoutView;
    UIView * _lockoutView;
    STLockoutViewController * _lockoutViewController;
    NSMutableArray * _messages;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) STConversationContext *conversationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *headerTextView;
@property (nonatomic) bool isShowingLockoutView;
@property (nonatomic, retain) UIView *lockoutView;
@property (nonatomic, retain) STLockoutViewController *lockoutViewController;
@property (nonatomic, retain) NSMutableArray *messages;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertTitleForDelete;
- (void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_conversationList;
- (void)_deleteConversation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_handleIDsForCurrentConversation;
- (void)_openRestoredChatInMessages;
- (void)_restoreConversation;
- (void)_updateTranscriptHistory;
- (void)chatAllowedByScreenTimeChanged:(id)arg1;
- (id)conversation;
- (id)conversationContext;
- (void)dealloc;
- (id)generateHeader;
- (id)headerTextView;
- (id)initWithConversation:(id)arg1;
- (bool)isChatAllowedByScreenTime:(id)arg1;
- (bool)isShowingLockoutView;
- (void)layoutLockoutView;
- (id)lockoutView;
- (id)lockoutViewController;
- (id)messages;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeLockoutControllerIfNeeded;
- (void)setConversation:(id)arg1;
- (void)setConversationContext:(id)arg1;
- (void)setHeaderTextView:(id)arg1;
- (void)setIsShowingLockoutView:(bool)arg1;
- (void)setLockoutView:(id)arg1;
- (void)setLockoutViewController:(id)arg1;
- (void)setMessages:(id)arg1;
- (bool)shouldPresentBlockingDowntimeViewController;
- (void)showScreenTimeShieldIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateScreenTimeShieldIfNeededForChat:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
