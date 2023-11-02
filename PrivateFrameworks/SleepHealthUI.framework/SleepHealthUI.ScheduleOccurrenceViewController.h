
@interface SleepHealthUI.ScheduleOccurrenceViewController : SleepHealthUI.SleepTableWelcomeController <HKSwitchTableViewCellDelegate, SleepHealthUI.ScheduleOccurrenceAlarmVolumeTableViewCellHandler, SleepHealthUI.SleepScheduleComponentsEditViewHandling, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate, UITableViewDelegate> {
    void alarmConfigurationObserver;
    void alarmPreviewPlayer;
    void allowsDeletion;
    void dataSource;
    void delegate;
    void hasFinishedNotifyingDelegate;
    void isIn24HourTime;
    void localeChangeObserver;
    void model;
    void modelEditObserver;
    void modelHasChanged;
    void scheduleChangeObserver;
    void significantTimeChangeObserver;
    void sleepDurationGoalObserver;
    void sleepScheduleProvider;
    void validScheduleRangeObserver;
    void willResignActiveObserver;
}

- (void).cxx_destruct;
- (void)cancelButtonPressed;
- (void)handleAppWillResignActive;
- (void)handleLocaleDidChange;
- (void)handleSignificantTimeChange;
- (void)restoreUserActivityState:(id)arg1;
- (void)saveButtonPressed;
- (void)scheduleDayPickerDidChange:(id)arg1;
- (void)scheduleOccurrenceAlarmVolumeEditingDidEnd:(id)arg1;
- (void)sleepScheduleComponentsEditViewEditingDidChange:(id)arg1;
- (void)sleepScheduleComponentsEditViewEditingDidEnd:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
