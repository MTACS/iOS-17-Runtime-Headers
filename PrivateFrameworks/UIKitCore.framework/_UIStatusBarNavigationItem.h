
@interface _UIStatusBarNavigationItem : _UIStatusBarItem {
    _UIStatusBarStringView * _nameView;
}

@property (nonatomic, retain) _UIStatusBarStringView *nameView;

- (void).cxx_destruct;
- (void)_create_nameView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)nameView;
- (void)setNameView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
