
@interface HUFaceRecognitionPersonEditorViewController : HUItemTableViewController <HUFaceRecognitionAddPersonViewControllerDelegate, HUSwitchCellDelegate> {
    <HUFaceRecognitionPersonEditorViewControllerDelegate> * _delegate;
    HUFaceRecognitionPersonEditorItemManager * _personItemManager;
    bool  _shouldUpdateDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUFaceRecognitionPersonEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUFaceRecognitionPersonEditorItemManager *personItemManager;
@property (nonatomic) bool shouldUpdateDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deletePerson;
- (void)_presentAddPersonViewController;
- (void)addPersonViewControllerDidFinish:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (bool)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)initWithPerson:(id)arg1 personManager:(id)arg2 home:(id)arg3;
- (id)initWithPersonLikeItem:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)personItemManager;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPersonItemManager:(id)arg1;
- (void)setShouldUpdateDelegate:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (bool)shouldUpdateDelegate;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewWillDisappear:(bool)arg1;

@end
