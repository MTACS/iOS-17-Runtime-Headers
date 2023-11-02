
@interface HUQuickControlGridViewController : HUQuickControlViewController {
    HUQuickControlCollectionViewController * _collectionViewController;
}

@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_subclass_configureQuickControlViewController:(id)arg1;
- (id)childQuickControlContentViewControllers;
- (id)collectionViewController;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 controlOrientation:(unsigned long long)arg4 preferredControl:(unsigned long long)arg5;
- (void)viewDidLoad;

@end
