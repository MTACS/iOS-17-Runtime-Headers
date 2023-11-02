
@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem {
    _UIStatusBarStringView * _buildVersionView;
}

@property (nonatomic, retain) _UIStatusBarStringView *buildVersionView;

- (void).cxx_destruct;
- (void)_create_buildVersionView;
- (id)buildVersionView;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (bool)needsUpdate;
- (void)setBuildVersionView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
