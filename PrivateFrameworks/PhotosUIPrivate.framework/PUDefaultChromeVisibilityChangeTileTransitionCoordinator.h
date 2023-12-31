
@interface PUDefaultChromeVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
