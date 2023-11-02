
@interface EKCalendarSubscriptionURLEditItem : EKCalendarEditItem <UITextFieldDelegate> {
    UITableViewCell * _cell;
    bool  _editable;
    bool  _inWaitPeriodSinceLastChange;
    NSString * _lastNotifiedURLString;
    <EKCalendarSubscriptionURLEditItemDelegate> * _urlEditItemDelegate;
    NSString * _urlString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <EKCalendarSubscriptionURLEditItemDelegate> *urlEditItemDelegate;
@property (nonatomic, retain) NSString *urlString;

- (void).cxx_destruct;
- (long long)_cellSelectionStyleForEditable:(bool)arg1;
- (void)_notifyDelegateThatURLStringChangedIfNeeded;
- (void)_textFieldChanged;
- (id)_textFieldColorForEditable:(bool)arg1;
- (void)_waitPeriodElapsedSinceLastTextFieldChange;
- (bool)becomeFirstResponder;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)editable;
- (id)headerTitle;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setUrlEditItemDelegate:(id)arg1;
- (void)setUrlString:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)urlEditItemDelegate;
- (id)urlString;

@end
