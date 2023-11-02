
@interface PRComplicationGalleryDetailViewController : SBHAddWidgetSheetViewControllerBase <PRComplicationGalleryDetailPageViewControllerDelegate, PRComplicationGalleryDetailViewDelegate, SBHWidgetSheetViewControlling> {
    NSString * _appName;
    SBHApplicationWidgetCollection * _applicationWidgetCollection;
    UIImage * _iconImage;
    NSArray * _pageViewControllers;
    <SBHWidgetSheetViewControllerPresenter> * _presenter;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) SBHApplicationWidgetCollection *applicationWidgetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSArray *pageViewControllers;
@property (nonatomic, readonly) <SBHWidgetSheetViewControllerPresenter> *presenter;
@property (nonatomic) bool showsBackgroundView;
@property (nonatomic) bool showsCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)_complicationGalleryDetailView;
- (void)_updateContent;
- (void)_updateParallax;
- (unsigned long long)addWidgetSheetLocation;
- (id)appName;
- (id)applicationWidgetCollection;
- (void)complicationGalleryDetailPageViewController:(id)arg1 didSelectWidgetIconView:(id)arg2;
- (void)complicationGalleryView:(id)arg1 didUpdateVisiblePagesWithAppearedBlock:(id /* block */)arg2;
- (void)complicationGalleryViewDidTapClose:(id)arg1;
- (void)complicationGalleryViewShouldUpdateParallax:(id)arg1;
- (id)iconImage;
- (void)loadView;
- (id)pageViewControllers;
- (id)presenter;
- (void)setAppName:(id)arg1;
- (void)setApplicationWidgetCollection:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setPageViewControllers:(id)arg1;
- (void)setShowsBackgroundView:(bool)arg1;
- (void)setShowsCloseButton:(bool)arg1;
- (bool)showsBackgroundView;
- (bool)showsCloseButton;
- (id)userInfo;
- (void)viewWillAppear:(bool)arg1;

@end
