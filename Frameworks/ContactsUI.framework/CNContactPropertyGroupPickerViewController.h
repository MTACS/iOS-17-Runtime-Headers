
@interface CNContactPropertyGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    CNContact * _contact;
    <CNContactGroupPickerDelegate> * _groupPickerDelegate;
    NSArray * _pickableGroups;
    NSArray * _prohibitedPropertyKeys;
    UITableView * _tableView;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNContactGroupPickerDelegate> *groupPickerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (readonly) Class superclass;

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;
+ (bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;
+ (id)propertySections;

- (void).cxx_destruct;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void)cancel:(id)arg1;
- (id)contact;
- (void)dealloc;
- (id)groupPickerDelegate;
- (id)initWithGroups:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prohibitedPropertyKeys;
- (void)setContact:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
