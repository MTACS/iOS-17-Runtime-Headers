
@interface EKCalendarSubscriptionDetailsViewController : UITableViewController <EKCalendarEditItemDelegate> {
    <EKCalendarEditItemDelegate> * _delegate;
    NSArray * _sections;
    EKSubscribedCalendarDescriptionHeader * _tableHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKCalendarEditItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_tableHeaderView;
- (void)calendarItemStartedEditing:(id)arg1;
- (id)delegate;
- (id)editorForCalendarEditItem:(id)arg1;
- (id)initWithCalendar:(id)arg1 store:(id)arg2;
- (bool)isNewCalendar;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)owningNavigationController;
- (void)resetBackgroundColor;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
