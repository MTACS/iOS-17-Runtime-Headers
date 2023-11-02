
@interface MagnifierSupport.DetectionModeSettingsViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UITableViewDelegate> {
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_detectionModeUniversalSettingsViewController;
    void $__lazy_storage_$_doorDetectionSettingsViewController;
    void $__lazy_storage_$_imageCaptionSettingsViewController;
    void $__lazy_storage_$_internalDetectionOptionsViewController;
    void $__lazy_storage_$_peopleDetectionSettingsViewController;
    void $__lazy_storage_$_pointSpeakSettingsViewController;
    void $__lazy_storage_$_textDetectionSettingsViewController;
    void delegate;
    void languageTranslator;
    void tableView;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleDoneButtonTap:(id)arg1;
- (void)handleInfoButtonTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
