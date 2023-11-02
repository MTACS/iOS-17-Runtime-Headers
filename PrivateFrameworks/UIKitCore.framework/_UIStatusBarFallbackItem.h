
@interface _UIStatusBarFallbackItem : _UIStatusBarItem {
    _UIStatusBarStringView * _label;
}

@property (nonatomic, retain) _UIStatusBarStringView *label;

- (void).cxx_destruct;
- (void)_create_label;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
