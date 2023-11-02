
@interface CNContactAddToGroupAction : CNContactAction <CNContactGroupPickerViewControllerDelegate> {
    NSArray * _contactParentGroupIdentifiers;
    NSArray * _contactParentGroups;
    CNContactStore * _contactStore;
    UINavigationController * _groupPickerNavigationViewController;
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    CNManagedConfiguration * _managedConfiguration;
    CNGroup * _selectedGroup;
}

@property (nonatomic, retain) NSArray *contactParentGroupIdentifiers;
@property (nonatomic, retain) NSArray *contactParentGroups;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UINavigationController *groupPickerNavigationViewController;
@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, retain) CNGroup *selectedGroup;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (id)contactParentGroupIdentifiers;
- (id)contactParentGroups;
- (id)contactStore;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;
- (void)groupPicker:(id)arg1 didSelectGroup:(id)arg2;
- (bool)groupPicker:(id)arg1 shouldEnableGroupWithIdentifier:(id)arg2;
- (void)groupPickerDidCancel:(id)arg1;
- (id)groupPickerNavigationViewController;
- (id)groupsAndContainersSaveManager;
- (id)managedConfiguration;
- (void)performActionWithSender:(id)arg1;
- (id)selectedGroup;
- (void)setContactParentGroupIdentifiers:(id)arg1;
- (void)setContactParentGroups:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setGroupPickerNavigationViewController:(id)arg1;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setSelectedGroup:(id)arg1;
- (id)sourceAccountExternalIdentifiers;

@end
