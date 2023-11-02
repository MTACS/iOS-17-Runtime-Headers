
@interface SCLSpecifierDataSource : NSObject {
    bool  _active;
    NSArray * _childDataSources;
    SCLListViewController * _listController;
    NSArray * _specifiers;
    SCLSettingsViewModel * _viewModel;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) NSArray *allSpecifiers;
@property (nonatomic, copy) NSArray *childDataSources;
@property (nonatomic) SCLListViewController *listController;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, readonly) SCLSettingsViewModel *viewModel;

+ (id)keyPathsForValuesAffectingAllSpecifiers;

- (void).cxx_destruct;
- (id)allSpecifiers;
- (id)childDataSources;
- (void)dealloc;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2;
- (bool)isActive;
- (id)listController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setActive:(bool)arg1;
- (void)setChildDataSources:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 specifier:(id)arg3;
- (id)viewModel;

@end
