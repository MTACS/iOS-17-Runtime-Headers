
@interface HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController <UITableViewDelegate> {
    void dataSource;
    void flow;
    void hasSymptoms;
    void healthAgencyModel;
    void isShowingDatePicker;
    void primaryButton;
    void secondaryButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  symptomOnsetDate;
}

- (void).cxx_destruct;
- (void)datePickerValueChanged:(id)arg1;
- (void)didTapCancel;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateSymptomsDateCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
