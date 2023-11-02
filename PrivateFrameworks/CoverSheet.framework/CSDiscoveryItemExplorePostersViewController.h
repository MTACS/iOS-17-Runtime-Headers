
@interface CSDiscoveryItemExplorePostersViewController : CSDiscoveryItemViewController {
    CSDiscoveryItemExplorePostersPlatterView * _platter;
}

@property (nonatomic, retain) CSDiscoveryItemExplorePostersPlatterView *platter;

- (void).cxx_destruct;
- (void)_updateAnimationState;
- (id)initWithPlatter:(id)arg1 firstDidAppearCompletion:(id /* block */)arg2;
- (id)platter;
- (void)setPlatter:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
