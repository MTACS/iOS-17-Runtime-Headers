
@interface SBFolderControllerConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _addsFocusGuidesForWrapping;
    unsigned long long  _allowedOrientations;
    SBFolderControllerAnimationContext * _animationContext;
    <SBNestingViewControllerDelegate> * _delegate;
    SBFolder * _folder;
    <SBFolderControllerDelegate> * _folderDelegate;
    SBFolderIconImageCache * _folderIconImageCache;
    double  _headerHeight;
    UIView * _headerView;
    SBHIconImageCache * _iconImageCache;
    SBIconPageIndicatorImageSetCache * _iconPageIndicatorImageSetCache;
    <SBIconViewProviding> * _iconViewProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialViewFrame;
    _UILegibilitySettings * _legibilitySettings;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    long long  _orientation;
    NSString * _originatingIconLocation;
    bool  _snapsToPageBoundariesAfterScrolling;
    unsigned long long  _userInterfaceLayoutDirectionHandling;
}

@property (nonatomic) bool addsFocusGuidesForWrapping;
@property (nonatomic) unsigned long long allowedOrientations;
@property (nonatomic, retain) SBFolderControllerAnimationContext *animationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBNestingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFolder *folder;
@property (nonatomic) <SBFolderControllerDelegate> *folderDelegate;
@property (nonatomic, retain) SBFolderIconImageCache *folderIconImageCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerHeight;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, retain) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialViewFrame;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) NSString *originatingIconLocation;
@property (nonatomic) bool snapsToPageBoundariesAfterScrolling;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;

- (void).cxx_destruct;
- (bool)addsFocusGuidesForWrapping;
- (unsigned long long)allowedOrientations;
- (id)animationContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)folder;
- (id)folderDelegate;
- (id)folderIconImageCache;
- (double)headerHeight;
- (id)headerView;
- (id)iconImageCache;
- (id)iconPageIndicatorImageSetCache;
- (id)iconViewProvider;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialViewFrame;
- (id)legibilitySettings;
- (id)listLayoutProvider;
- (long long)orientation;
- (id)originatingIconLocation;
- (void)setAddsFocusGuidesForWrapping:(bool)arg1;
- (void)setAllowedOrientations:(unsigned long long)arg1;
- (void)setAnimationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setFolderDelegate:(id)arg1;
- (void)setFolderIconImageCache:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconPageIndicatorImageSetCache:(id)arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setInitialViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginatingIconLocation:(id)arg1;
- (void)setSnapsToPageBoundariesAfterScrolling:(bool)arg1;
- (void)setUserInterfaceLayoutDirectionHandling:(unsigned long long)arg1;
- (bool)snapsToPageBoundariesAfterScrolling;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)userInterfaceLayoutDirectionHandling;

@end
