
@interface STCustomizeDaysListController : PSListController <PSDateTimePickerCellDelegate> {
    <STCustomizeDaysListControllerDelegate> * _delegate;
    PSSpecifier * _selectedDaySpecifier;
    NSDictionary * _timeByDay;
    PSSpecifier * _timePickerSpecifier;
}

@property (nonatomic) <STCustomizeDaysListControllerDelegate> *delegate;
@property (nonatomic, retain) PSSpecifier *selectedDaySpecifier;
@property (nonatomic, copy) NSDictionary *timeByDay;
@property (nonatomic, retain) PSSpecifier *timePickerSpecifier;

- (void).cxx_destruct;
- (id)_localizedDayNames;
- (id)_localizedDayOrder;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;
- (id)budgetTime:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (id)delegate;
- (id)init;
- (id)selectedDaySpecifier;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDaySpecifier:(id)arg1;
- (void)setTimeByDay:(id)arg1;
- (void)setTimePickerSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)timeByDay;
- (id)timePickerSpecifier;
- (void)viewWillDisappear:(bool)arg1;

@end
