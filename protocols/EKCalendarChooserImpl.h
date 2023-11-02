
@protocol EKCalendarChooserImpl <NSObject>

@required

- (bool)allSelected;
- (bool)allowsPullToRefresh;
- (bool)allowsRotation;
- (void)centerOnCalendar:(EKCalendar *)arg1;
- (void)centerOnCalendar:(EKCalendar *)arg1 animated:(bool)arg2;
- (EKCalendar *)centeredCalendar;
- (long long)chooserMode;
- (<EKCalendarChooserDelegate> *)delegate;
- (bool)disableCalendarEditing;
- (bool)disableCalendarsUnselectedByFocus;
- (EKAbstractCalendarEditor *)displayedEditor;
- (EKEventStore *)eventStore;
- (int)explanatoryTextMode;
- (void)focusModeConfigurationChanged;
- (void)groupHeaderChangedHeight:(CUIKGroupInfo *)arg1;
- (void)groupShowAllTapped:(CUIKGroupInfo *)arg1;
- (void)identityChanged:(EKSource *)arg1;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(EKEventStore *)arg4;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 forEvent:(EKEvent *)arg4 eventStore:(EKEventStore *)arg5 limitedToSource:(EKSource *)arg6 showIdentityChooser:(bool)arg7 showDelegateSetupCell:(bool)arg8 showAccountStatus:(bool)arg9;
- (id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(EKEventStore *)arg3;
- (EKSource *)limitedToSource;
- (<EKUIViewControllerNavigationDelegate> *)navigationDelegate;
- (bool)onlyShowUnmanagedAccounts;
- (void)openAddRegularCalendarWithTitle:(NSString *)arg1;
- (void)redisplayEditor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: EKAbstractCalendarEditor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectAllCalendars;
- (EKCalendar *)selectedCalendar;
- (NSSet *)selectedCalendars;
- (long long)selectionStyle;
- (void)setAllowsPullToRefresh:(bool)arg1;
- (void)setAllowsRotation:(bool)arg1;
- (void)setChooserMode:(long long)arg1;
- (void)setDelegate:(id <EKCalendarChooserDelegate>)arg1;
- (void)setDisableCalendarEditing:(bool)arg1;
- (void)setDisableCalendarsUnselectedByFocus:(bool)arg1;
- (void)setExplanatoryTextMode:(int)arg1;
- (void)setLimitedToSource:(EKSource *)arg1;
- (void)setNavigationDelegate:(id <EKUIViewControllerNavigationDelegate>)arg1;
- (void)setOnlyShowUnmanagedAccounts:(bool)arg1;
- (void)setSelectedCalendar:(EKCalendar *)arg1;
- (void)setSelectedCalendars:(NSSet *)arg1;
- (void)setShouldOverrideAuthorizationStatus:(bool)arg1 withRemoteUIStatus:(long long)arg2 displayStyle:(long long)arg3;
- (void)setShowAccountStatus:(bool)arg1;
- (void)setShowAll:(bool)arg1;
- (void)setShowDetailAccessories:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsDeclinedEventsSetting:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsRefreshButton:(bool)arg1;
- (void)setStyleProvider:(id <EKStyleProvider>)arg1;
- (bool)showAccountStatus;
- (void)showAddSubscribedCalendarWithURL:(NSURL *)arg1;
- (void)showAllButtonPressed;
- (bool)showDetailAccessories;
- (bool)showsCancelButton;
- (bool)showsDeclinedEventsSetting;
- (bool)showsDoneButton;
- (bool)showsRefreshButton;
- (EKSource *)sourceForSelectedIdentity;

@end
