
@interface EKCalendarEditor : EKAbstractCalendarEditor {
    EKCalendarColorEditItem * _colorEditItem;
    unsigned long long  _entityType;
    EKSource * _limitedToSource;
    NSString * _prefillCalendarTitle;
    EKCalendarShareesEditItem * _shareesEditItem;
}

@property (nonatomic, retain) NSString *prefillCalendarTitle;

- (void).cxx_destruct;
- (void)_deleteCalendar;
- (void)_deleteClicked:(id)arg1;
- (bool)_shouldShowDeleteButton;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned long long)arg3 limitedToSource:(id)arg4;
- (id)loadEditItems;
- (void)loadView;
- (id)prefillCalendarTitle;
- (void)setPrefillCalendarTitle:(id)arg1;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
