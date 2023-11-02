
@interface HUInstructionsTableViewController : HUItemTableViewController {
    UIViewController * _contentViewController;
    HUInstructionsItem * _instructionsItem;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, readonly) HUInstructionsItem *instructionsItem;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)contentViewController;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)instructionsItem;
- (void)setContentViewController:(id)arg1;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
