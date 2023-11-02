
@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (Class)_contentViewClass;
+ (id)iconLocation;

- (void)_logCategoryVisibilityChangedTo:(bool)arg1;
- (id)contentScrollView;
- (id)currentIconListView;
- (void)handleTapGesture:(id)arg1;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
