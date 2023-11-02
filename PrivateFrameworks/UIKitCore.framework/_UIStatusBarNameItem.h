
@interface _UIStatusBarNameItem : _UIStatusBarItem {
    NSString * _nameEntryKey;
    _UIStatusBarStringView * _nameView;
}

@property (nonatomic, readonly) NSString *nameEntryKey;
@property (nonatomic, retain) _UIStatusBarStringView *nameView;

- (void).cxx_destruct;
- (void)_create_nameView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)nameEntryKey;
- (id)nameView;
- (void)setNameView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
