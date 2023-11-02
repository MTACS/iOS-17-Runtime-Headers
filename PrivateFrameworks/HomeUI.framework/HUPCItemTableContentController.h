
@interface HUPCItemTableContentController : PRXCardContentViewController <HUPreloadableViewController> {
    HUItemTableViewController * _itemTableViewController;
    NSLayoutConstraint * _itemTableViewHeightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUItemTableViewController *itemTableViewController;
@property (nonatomic, retain) NSLayoutConstraint *itemTableViewHeightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 itemTableViewController:(id)arg3;
- (id)itemTableViewController;
- (id)itemTableViewHeightConstraint;
- (void)setItemTableViewController:(id)arg1;
- (void)setItemTableViewHeightConstraint:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
