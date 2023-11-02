
@interface HUAccessorySceneListViewController : HUItemTableViewController {
    HUAccessorySceneListContentViewController * _existingSceneListContentViewController;
    HUAccessorySceneListContentViewController * _suggestedSceneListContentViewController;
}

@property (nonatomic, retain) HUAccessorySceneListContentViewController *existingSceneListContentViewController;
@property (nonatomic, readonly) HUAccessorySceneListItemManager *itemManager;
@property (nonatomic, retain) HUAccessorySceneListContentViewController *suggestedSceneListContentViewController;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)existingSceneListContentViewController;
- (id)initWithServiceLikeItem:(id)arg1;
- (void)setExistingSceneListContentViewController:(id)arg1;
- (void)setSuggestedSceneListContentViewController:(id)arg1;
- (id)suggestedSceneListContentViewController;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
