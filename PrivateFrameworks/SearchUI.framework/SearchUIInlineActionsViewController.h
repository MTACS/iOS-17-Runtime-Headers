
@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNActionViewDelegate, CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, NUIContainerViewDelegate> {
    CNActionView * _addStopButton;
    CNActionView * _contactButton;
    CNActionView * _directionsButton;
    CNActionView * _eventButton;
    CNContactInlineActionsViewController * _inlineActionsViewController;
    CNActionView * _messageButton;
    CNActionView * _reminderButton;
}

@property (nonatomic, retain) CNActionView *addStopButton;
@property (nonatomic, retain) CNActionView *contactButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNActionView *directionsButton;
@property (nonatomic, retain) CNActionView *eventButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (nonatomic, retain) CNActionView *messageButton;
@property (nonatomic, retain) CNActionView *reminderButton;
@property (readonly) Class superclass;

+ (id)buttonCategoriesForActionItem:(id)arg1;
+ (void)clearInlineActionsCache;
+ (id)contactForActionItem:(id)arg1;
+ (id)inlineActionsCache;
+ (bool)supportsRowModel:(id)arg1;
+ (id)symbolNameForCustomActionType:(id)arg1;

- (void).cxx_destruct;
- (id)actionViewForCustomType:(id)arg1;
- (id)addStopButton;
- (id)contactButton;
- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)didPerformContactActionOfType:(id)arg1;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (void)didPressButtonWithActionType:(id)arg1;
- (id)directionsButton;
- (id)eventButton;
- (id)hostingViewControllerForController:(id)arg1;
- (id)inlineActionsViewController;
- (id)messageButton;
- (id)reminderButton;
- (void)setAddStopButton:(id)arg1;
- (void)setContactButton:(id)arg1;
- (void)setDirectionsButton:(id)arg1;
- (void)setEventButton:(id)arg1;
- (void)setInlineActionsViewController:(id)arg1;
- (void)setMessageButton:(id)arg1;
- (void)setReminderButton:(id)arg1;
- (id)setupView;
- (void)tlk_updateForAppearance:(id)arg1;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end
