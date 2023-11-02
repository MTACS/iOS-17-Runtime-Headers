
@interface EKAbstractCalendarEditor : UITableViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {
    EKCalendar * _calendar;
    <EKCalendarEditorDelegate> * _delegate;
    NSArray * _editItems;
    EKEventStore * _eventStore;
    bool  _isNewCalendar;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    <EKStyleProvider> * _styleProvider;
}

@property (nonatomic, retain) EKCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKCalendarEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic) <EKStyleProvider> *styleProvider;
@property (readonly) Class superclass;

+ (id)createNewCalendarForEntityType:(unsigned long long)arg1 inEventStore:(id)arg2;

- (void).cxx_destruct;
- (void)_eventStoreChanged:(id)arg1;
- (void)_localeChanged;
- (void)_presentValidationAlert:(id)arg1;
- (struct CGSize { double x1; double x2; })calculatePreferredContentSize;
- (id)calendar;
- (void)calendarItemStartedEditing:(id)arg1;
- (bool)canManagePresentationStyle;
- (void)cancel:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didSaveCalendar:(id)arg1;
- (void)done:(id)arg1;
- (id)editItems;
- (id)editorForCalendarEditItem:(id)arg1;
- (id)eventStore;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4;
- (bool)isModalInPresentation;
- (bool)isNewCalendar;
- (id)leftButton;
- (id)loadEditItems;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)owningNavigationController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reloadEditItems;
- (void)resetBackgroundColor;
- (id)rightButton;
- (void)saveCalendar;
- (void)saveChanges;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupForCalendar;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsManagement;
- (void)willSaveCalendar:(id)arg1;

@end
