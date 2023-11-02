
@interface CNEmergencyContactAction : CNPropertyAction <CNPickerControllerDelegate, CNUINavigationListViewControllerDelegate, HKMedicalIDViewControllerDelegate> {
    bool  _addingToEmergency;
    UIAlertController * _alertController;
    CNContactProperty * _contactProperty;
    CNContactStore * _contactStore;
    CNHealthStoreManager * _healthStoreManager;
    CNUINavigationListViewController * _listController;
    <CNScheduler> * _mainThreadScheduler;
    <CNScheduler> * _workQueue;
}

@property (nonatomic) bool addingToEmergency;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) CNContactProperty *contactProperty;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNHealthStoreManager *healthStoreManager;
@property (nonatomic, retain) CNUINavigationListViewController *listController;
@property (nonatomic, retain) <CNScheduler> *mainThreadScheduler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

+ (id)log;

- (void).cxx_destruct;
- (bool)addingToEmergency;
- (id)alertController;
- (id)contactProperty;
- (id)contactStore;
- (void)createMedicalIDWithEmergencyContact:(id)arg1;
- (id)healthStoreManager;
- (id)initWithContact:(id)arg1 healthStoreManager:(id)arg2 propertyItems:(id)arg3;
- (id)listController;
- (id)mainThreadScheduler;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)performActionWithContactProperty:(id)arg1 relationship:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (void)setAddingToEmergency:(bool)arg1;
- (void)setAlertController:(id)arg1;
- (void)setContactProperty:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setHealthStoreManager:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setMainThreadScheduler:(id)arg1;
- (void)showConfirmRemoveAlertWithSender:(id)arg1 completion:(id /* block */)arg2;
- (void)showHKMedicalIDViewControllerForMedicalID:(id)arg1;
- (void)showRelationshipPickerForContactProperty:(id)arg1 sender:(id)arg2;
- (id)workQueue;

@end
