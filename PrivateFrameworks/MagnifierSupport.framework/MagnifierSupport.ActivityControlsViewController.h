
@interface MagnifierSupport.ActivityControlsViewController : UIViewController <UITableViewDelegate, UITextFieldDelegate> {
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_detectionModeUniversalSettingsViewController;
    void $__lazy_storage_$_doorDetectionSettingsViewController;
    void $__lazy_storage_$_filtersCollectionCustomizationViewController;
    void $__lazy_storage_$_imageCaptionsSettingsViewController;
    void $__lazy_storage_$_peopleDetectionSettingsViewController;
    void $__lazy_storage_$_pointSpeakSettingsViewController;
    void $__lazy_storage_$_textDetectionSettingsViewController;
    void activityCreatedDelegate;
    void languageTranslator;
    void maxPrimaryControls;
    void minPrimaryControls;
    void nameTitle;
    void tableView;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleDoneButtonTap:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
