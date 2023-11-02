
@interface MUPlaceWebContentSectionController : MUPlaceSectionController <MUPlaceSectionControlling, MUWebContentViewControllerDelegate> {
    MUPlaceSectionView * _sectionView;
    bool  _shouldRemoveWebContent;
    GEOWebContentModuleConfiguration * _webContentConfig;
    <MUPlaceWebContentSectionControllerDelegate> * _webContentDelegate;
    MUWebContentViewController * _webContentViewController;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;
@property (nonatomic) <MUPlaceWebContentSectionControllerDelegate> *webContentDelegate;

- (void).cxx_destruct;
- (void)_setupWebContentViewController;
- (int)analyticsModuleType;
- (id)draggableContent;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;
- (bool)isImpressionable;
- (bool)isLoading;
- (bool)isWebContentViewControllerParentPlacecardLoading:(id)arg1;
- (void)removeWebContentViewController:(id)arg1 arguments:(id)arg2;
- (id)sectionView;
- (id)sectionViewController;
- (void)setWebContentDelegate:(id)arg1;
- (id)webContentDelegate;
- (void)webContentViewController:(id)arg1 performHeightChangeWithBlock:(id /* block */)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)webContentViewControllerDidStopLoading:(id)arg1;

@end
