
@interface AbstractCatalogViewController : UIViewController

@property (nonatomic, readonly) CompletionListTableViewController *completionsViewController;
@property (nonatomic, readonly) CompletionListTableViewController *completionsViewControllerIfLoaded;
@property (nonatomic, readonly) UIViewController *foregroundChildViewController;
@property (nonatomic, readonly) double maxContentHeight;
@property (nonatomic, readonly) double requiredContentWidth;
@property (nonatomic, readonly) SFStartPageViewController *startPageViewController;
@property (nonatomic, readonly) UniversalSearchFirstTimeExperienceViewController *universalSearchFirstTimeExperienceViewController;

- (void)_relinquishOwnershipOfViewControllerFromCurrentParent:(id)arg1;
- (bool)_takeOwnershipOfViewController:(id)arg1;
- (id)completionsViewController;
- (id)completionsViewControllerIfLoaded;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)didGainOwnershipOfStartPageViewController;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (id)foregroundChildViewController;
- (bool)isResponsibleForLayoutOfViewController:(id)arg1;
- (double)maxContentHeight;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
- (void)relinquishOwnershipOfStartPageViewControllerFromCurrentParent;
- (void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
- (double)requiredContentWidth;
- (void)setForegroundChildViewControllerNeedsUpdate;
- (id)startPageViewController;
- (void)takeOwnershipOfCompletionsViewController;
- (void)takeOwnershipOfStartPageViewController;
- (void)takeOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)updatePreferredContentSize;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
