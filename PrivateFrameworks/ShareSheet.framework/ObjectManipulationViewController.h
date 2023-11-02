
@interface ObjectManipulationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UIVisualEffectView * _backgroundView;
    NSArray * _customizationGroups;
    NSArray * _customizations;
    UIViewController * _itemPreviewViewController;
    <ObjectManipulationDelegate> * _refreshDelegate;
    NSMutableDictionary * _sectionHeaders;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) NSArray *customizationGroups;
@property (nonatomic, retain) NSArray *customizations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *itemPreviewViewController;
@property (nonatomic) <ObjectManipulationDelegate> *refreshDelegate;
@property (nonatomic, retain) NSMutableDictionary *sectionHeaders;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_reloadCustomizations;
- (id)backgroundView;
- (id)customizationGroups;
- (id)customizations;
- (void)didToggleSwitch:(id)arg1;
- (void)dismissKeyboard:(id)arg1;
- (id)initWithCustomizationGroups:(id)arg1;
- (id)itemPreviewViewController;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)refreshDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sectionHeaders;
- (void)setBackgroundView:(id)arg1;
- (void)setCustomizationGroups:(id)arg1;
- (void)setCustomizations:(id)arg1;
- (void)setItemPreviewViewController:(id)arg1;
- (void)setRefreshDelegate:(id)arg1;
- (void)setSectionHeaders:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
