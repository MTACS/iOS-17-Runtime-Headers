
@interface SCLListViewController : PSListController {
    NSArray * _pendingUpdateEndSpecifiers;
    NSArray * _pendingUpdateStartSpecifiers;
    SCLSpecifierDataSource * _specifierSource;
    long long  _updateCount;
    bool  _wantsEditingMode;
}

@property (nonatomic, copy) NSArray *pendingUpdateEndSpecifiers;
@property (nonatomic, copy) NSArray *pendingUpdateStartSpecifiers;
@property (nonatomic, retain) SCLSpecifierDataSource *specifierSource;
@property (nonatomic) long long updateCount;
@property (nonatomic) bool wantsEditingMode;

- (void).cxx_destruct;
- (void)beginUpdates;
- (void)dealloc;
- (void)endUpdates;
- (id)init;
- (void)loadSpecifierSource;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pendingUpdateEndSpecifiers;
- (id)pendingUpdateStartSpecifiers;
- (void)reevaluateEditingMode;
- (void)setPendingUpdateEndSpecifiers:(id)arg1;
- (void)setPendingUpdateStartSpecifiers:(id)arg1;
- (void)setSpecifierSource:(id)arg1;
- (void)setUpdateCount:(long long)arg1;
- (void)setWantsEditingMode:(bool)arg1;
- (id)specifierSource;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)updateCount;
- (void)viewDidLoad;
- (bool)wantsEditingMode;

@end
