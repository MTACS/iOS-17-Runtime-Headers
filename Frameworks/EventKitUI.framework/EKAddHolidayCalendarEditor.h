
@interface EKAddHolidayCalendarEditor : EKAbstractCalendarEditor <EKCalendarEditorDelegate, UISearchResultsUpdating> {
    NSSet * _alreadySubscribedCalendarURLStrings;
    NSArray * _calendarData;
    unsigned long long  _entityType;
    NSArray * _filteredCalendarData;
    EKSource * _limitedToSource;
    UISearchController * _searchController;
    CUIKSubscribedHolidayCalendar * _selectedCalendarDatum;
    UIActivityIndicatorView * _spinner;
    UILabel * _standbyMessageLabel;
    UIView * _standbyScreen;
    EKSubscribedCalendarEditor * _subscriptionEditor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_alreadySubscribedToCalendar:(id)arg1;
- (void)_beginLoadingHolidayCalendars;
- (void)_displayCalendarListScreen;
- (void)_displayErrorScreen;
- (void)_displayLoadingScreen;
- (void)_holidayCalendarsLoadCompletedWithCalendarData:(id)arg1;
- (void)_holidayCalendarsLoadFailed;
- (void)_populatedAlreadySubscribedCalendarURLs;
- (struct CGSize { double x1; double x2; })calculatePreferredContentSize;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)editItems;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)rightButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
