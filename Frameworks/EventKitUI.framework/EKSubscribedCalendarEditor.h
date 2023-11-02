
@interface EKSubscribedCalendarEditor : EKAbstractCalendarEditor <DAESubscribedCalendarDownloadDelegate, EKCalendarSubscriptionSpamCheckEditItemDelegate, EKCalendarSubscriptionURLEditItemDelegate> {
    bool  _allowTableHeaderLayouts;
    EKCalendarCancelValidationEditItem * _cancelValidationItem;
    EKCalendarColorEditItem * _colorEditItem;
    bool  _holidayCalendarMode;
    bool  _insecureConnectionApproved;
    bool  _insecureConnectionOffered;
    EKSource * _limitedToSource;
    NSString * _password;
    NSURL * _prefillURL;
    NSString * _preloadTitle;
    id  _previewDownloadToken;
    DAESubscribedCalendarSummary * _previewSummary;
    EKCalendarSubscriptionSpamCheckEditItem * _spamCheckItem;
    unsigned long long  _state;
    CUIKSubscribedCalendarManager * _subCalManager;
    EKSubscribedCalendarDescriptionHeader * _tableViewHeader;
    EKCalendarSubscriptionURLEditItem * _urlItem;
    NSString * _username;
    EKCalendarValidateEditItem * _validateItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *prefillURL;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)createNewCalendarForEntityType:(unsigned long long)arg1 inEventStore:(id)arg2;

- (void).cxx_destruct;
- (void)URLEditItemDidChangeURLString:(id)arg1;
- (void)_allowButtonTapped;
- (void)_cancelInFlightPreviewDataFetch;
- (void)_denyButtonTapped;
- (id)_editItemsForState:(unsigned long long)arg1;
- (void)_kickoffPreviewDataFetch:(id)arg1;
- (bool)_needToShowPrivacyNotice;
- (void)_promptToContinueUsingInsecureConnection;
- (void)_setTableHeaderViewForState;
- (bool)_shouldShowDeleteButton;
- (void)_showPrivacyNotice;
- (void)_startSpamCheckingURLString:(id)arg1;
- (void)_unsubscribeFromCalendar;
- (void)_unsubscribeFromCalendarAndReportJunk;
- (void)_unsubscribeTapped:(id)arg1;
- (void)_updateCancelButtonVisibilityForSpamStatus:(bool)arg1;
- (void)_updateTableHeaderLayout;
- (void)_validateURL;
- (void)_validateURL:(id)arg1;
- (void)_validateUserEnteredURL;
- (struct CGSize { double x1; double x2; })calculatePreferredContentSize;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)calendarSubscriptionSpamCheckEditItem:(id)arg1 didDetermineThatURL:(id)arg2 isSpam:(bool)arg3;
- (void)cancel:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)didSaveCalendar:(id)arg1;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4;
- (id)loadEditItems;
- (void)loadView;
- (id)prefillURL;
- (id)rightButton;
- (void)setHolidayCalendarModeWithTitle:(id)arg1;
- (void)setPrefillURL:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)subscribedCalendarDidFinishLoading:(id)arg1;
- (void)subscribedCalendarFailedWithError:(id)arg1;
- (void)subscribedCalendarProgressedTo:(long long)arg1 totalBytes:(long long)arg2;
- (void)subscribedCalendarRequiresPassword:(id)arg1 withContinuation:(id /* block */)arg2;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willSaveCalendar:(id)arg1;

@end
