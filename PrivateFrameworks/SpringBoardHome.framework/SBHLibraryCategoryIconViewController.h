
@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBHLegibility, SBHLibraryCategoryObserver, SBIconViewCustomImageViewControlling, SBIconViewQuerying> {
    SBHLibraryCategoryPodBackgroundView * _backgroundView;
    SBHLibraryCategory * _category;
    bool  _editing;
    SBFolder * _folder;
    SBFolderIconImageCache * _folderIconImageCache;
    SBHIconImageCache * _iconImageCache;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    SBIconListView * _iconListView;
    <SBIconViewProviding> * _iconViewProvider;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    NSString * _location;
    unsigned long long  _pauseReasons;
    <BSInvalidatable> * _preventFolderUpdateAssertion;
    bool  _showsSquareCorners;
}

@property (nonatomic, readonly, copy) NSArray *applicationShortcutItems;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; } approximateLayoutPosition;
@property (nonatomic) bool automaticallyUpdatesVisiblySettled;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, copy) id /* block */ backgroundViewConfigurator;
@property (nonatomic, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) SBHLibraryCategory *category;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDropping, nonatomic) bool dropping;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) SBFolder *folder;
@property (nonatomic, retain) SBFolderIconImageCache *folderIconImageCache;
@property (nonatomic) bool forcesEdgeAntialiasing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumPreferredEdgeInsetsForContextMenu;
@property (getter=isOverlapping, nonatomic) bool overlapping;
@property (nonatomic) unsigned long long pauseReasons;
@property (nonatomic) unsigned long long presentationMode;
@property (getter=isShowingContextMenu, nonatomic) bool showingContextMenu;
@property (nonatomic) bool showsSnapshotWhenDeactivated;
@property (nonatomic) bool showsSquareCorners;
@property (nonatomic, readonly) UIView *snapshotView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } snapshotViewCenter;
@property (nonatomic, readonly) double snapshotViewScaleFactor;
@property (nonatomic, readonly) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic, readonly) <SBLeafIconDataSource> *visiblyActiveDataSource;
@property (nonatomic, readonly) bool wantsCaptureOnlyBackgroundView;
@property (nonatomic) bool wantsEditingDisplayStyle;
@property (nonatomic, readonly) bool wantsLabelHidden;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)category;
- (void)categoryDidUpdate:(id)arg1;
- (void)categoryWillUpdate:(id)arg1;
- (double)continuousCornerRadius;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)folder;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (id)folderIconImageCache;
- (id)iconImageCache;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconListView;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewProvider;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isEditing;
- (bool)isPresentingIconLocation:(id)arg1;
- (id)legibilitySettings;
- (id)listLayoutProvider;
- (id)location;
- (unsigned long long)pauseReasons;
- (id)presentedIconLocations;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setPauseReasons:(unsigned long long)arg1;
- (void)setShowsSquareCorners:(bool)arg1;
- (bool)showsSquareCorners;
- (id)sourceView;
- (void)updateCategory:(id)arg1 location:(id)arg2;
- (void)updateFolder:(id)arg1 location:(id)arg2;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
