
@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar * _calendar;
    EKUITableViewCell * _displayCell;
    EKUIPopupTableViewCell * _popupCell;
    UIMenu * _popupMenu;
}

- (void).cxx_destruct;
- (bool)_calendarCanBeChanged;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (bool)_shouldAllowViewingDetailsForCalendar:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (id)eligibleCalendars;
- (bool)eventViewController:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)init;
- (bool)minimalMode;
- (id)popupMenu:(id)arg1;
- (void)reset;

@end
