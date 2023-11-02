
@interface CNContactCardFieldPicker : UIViewController <UITableViewDelegate> {
    NSArray * _contacts;
    <CNContactCardFieldPickerDelegate> * _delegate;
    CNContactCardFieldPickerDataSource * _fieldPickerDataSource;
    bool  _shouldSelectDefaultFields;
    UITableView * _tableView;
    UIBarButtonItem * _toggleSelectAllFieldsButton;
}

@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CNContactCardFieldPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactCardFieldPickerDataSource *fieldPickerDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldSelectDefaultFields;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIBarButtonItem *toggleSelectAllFieldsButton;

+ (id)imageProperties;
+ (id)privateCardPropertiesForContacts:(id)arg1;

- (void).cxx_destruct;
- (bool)allFieldsSelected;
- (id)contacts;
- (id)delegate;
- (void)deselectAllFields;
- (void)done:(id)arg1;
- (id)fieldPickerDataSource;
- (id)initWithContact:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (bool)isInActivityController;
- (void)saveFilteredContacts;
- (void)selectAllFields;
- (void)selectDefaultFields;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldPickerDataSource:(id)arg1;
- (void)setPhotoFromContact:(id)arg1 onFilteredContact:(id)arg2;
- (void)setShouldSelectDefaultFields:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setToggleSelectAllFieldsButton:(id)arg1;
- (void)setUpDoneButton;
- (void)setUpTableView;
- (void)setUpToggleSelectAllFieldsButton;
- (bool)shouldSelectDefaultFields;
- (id)tableView;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForSelectAllFieldsButton;
- (id)toggleSelectAllFieldsButton;
- (void)toggleSelectionOfFields:(id)arg1;
- (void)updateToggleSelectAllFieldsButtonTitle;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
