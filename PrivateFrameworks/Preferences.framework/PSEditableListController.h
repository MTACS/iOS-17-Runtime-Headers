
@interface PSEditableListController : PSListController {
    UIBarButtonItem * _editBarButtonItem;
    bool  _editable;
    bool  _editingDisabled;
    NSArray * _previousRightBarButtonItems;
}

@property (nonatomic, readonly) UIBarButtonItem *editBarButtonItem;
@property (nonatomic, retain) NSArray *previousRightBarButtonItems;

- (void).cxx_destruct;
- (void)_setEditable:(bool)arg1 animated:(bool)arg2;
- (void)didLock;
- (id)editBarButtonItem;
- (void)editDoneTapped;
- (bool)editable;
- (id)init;
- (bool)performDeletionActionForSpecifier:(id)arg1;
- (id)previousRightBarButtonItems;
- (void)setEditButtonEnabled:(bool)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditingButtonHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPreviousRightBarButtonItems:(id)arg1;
- (void)suspend;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
