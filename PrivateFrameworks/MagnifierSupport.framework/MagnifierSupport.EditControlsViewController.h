
@interface MagnifierSupport.EditControlsViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UITableViewDelegate> {
    void $__lazy_storage_$_activitiesCustomizationViewController;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_filterCustomizationViewController;
    void $__lazy_storage_$_imageCaptionSettingsViewController;
    void delegate;
    void languageTranslator;
    void maxPrimaryControls;
    void minPrimaryControls;
    void tableView;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleDoneButtonTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
