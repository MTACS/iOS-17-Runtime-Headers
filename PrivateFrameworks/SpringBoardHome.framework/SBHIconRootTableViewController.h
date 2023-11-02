
@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding> {
    unsigned long long  _contentVisibility;
    SBFolder * _folder;
    SBFolderIconImageCache * _folderIconImageCache;
    SBHIconImageCache * _iconImageCache;
    _UILegibilitySettings * _legibilitySettings;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) unsigned long long contentVisibility;
@property (nonatomic) long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *deepestFolderController;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, retain) SBFolder *folder;
@property (nonatomic, retain) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly, copy) NSSet *presentedIconLocations;
@property (getter=isScrollTracking, nonatomic, readonly) bool scrollTracking;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelScrolling;
- (id)contentView;
- (unsigned long long)contentVisibility;
- (long long)currentPageIndex;
- (id)deepestFolderController;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)folder;
- (id)folderIconImageCache;
- (id)iconImageCache;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isEditing;
- (bool)isPresentingIconLocation:(id)arg1;
- (bool)isScrollTracking;
- (bool)isScrolling;
- (id)legibilitySettings;
- (void)noteUserIsInteractingWithIcons;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentedIconLocations;
- (void)revealIcon:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setCurrentPageIndex:(long long)arg1;
- (bool)setCurrentPageIndex:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFolder:(id)arg1;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
