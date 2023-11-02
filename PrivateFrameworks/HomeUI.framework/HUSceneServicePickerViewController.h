
@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController {
    HFActionSetBuilder * _actionSetBuilder;
    NSSet * _existingActionSetCharacteristics;
    NSSet * _existingActionSetMediaProfiles;
    <HUSceneServicePickerViewControllerDelegate> * _servicePickerDelegate;
}

@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;
@property (nonatomic, retain) NSSet *existingActionSetCharacteristics;
@property (nonatomic, retain) NSSet *existingActionSetMediaProfiles;
@property (nonatomic) <HUSceneServicePickerViewControllerDelegate> *servicePickerDelegate;

- (void).cxx_destruct;
- (bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)_updateActionSetBuilder;
- (void)_validateDoneButton;
- (id)actionSetBuilder;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (id)existingActionSetCharacteristics;
- (id)existingActionSetMediaProfiles;
- (id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2;
- (id)initWithServiceGridItemManager:(id)arg1;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)servicePickerDelegate;
- (void)setExistingActionSetCharacteristics:(id)arg1;
- (void)setExistingActionSetMediaProfiles:(id)arg1;
- (void)setServicePickerDelegate:(id)arg1;

@end
