
@interface SleepHealthUI.QuickScheduleOverrideViewController : UITableViewController <HKSwitchTableViewCellDelegate, SleepHealthUI.ScheduleOccurrenceAlarmVolumeTableViewCellHandler, SleepHealthUI.SleepScheduleComponentsEditViewHandling, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {
    void alarmConfigurationObserver;
    void alarmPreviewPlayer;
    void dataSource;
    void delegate;
    void model;
    void modelEditObserver;
    void modelHasChanged;
    void nextOccurrenceChangeObserver;
    void scheduleChangeObserver;
    void significantTimeChangeObserver;
    void sleepDurationGoalObserver;
    void sleepScheduleProvider;
    void tonePickerStyleProvider;
    void validScheduleRangeObserver;
    void vibrationPickerStyleProvider;
    void willResignActiveObserver;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)cancelButtonPressed;
- (void)handleAppWillResignActive;
- (void)handleSignificantTimeChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)saveButtonPressed;
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
