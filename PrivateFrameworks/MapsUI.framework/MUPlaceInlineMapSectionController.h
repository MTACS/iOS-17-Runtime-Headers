
@interface MUPlaceInlineMapSectionController : MUPlaceSectionController <MKPlaceInlineMapViewControllerDelegate, MUPlaceSectionControlling> {
    MKPlaceInlineMapViewControllerConfiguration * _configuration;
    MKPlaceInlineMapViewController * _inlineMapViewController;
    MKPlacePoisInlineMapViewController * _poiInlineMapViewController;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupInlineMap;
- (int)analyticsModuleType;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;
- (bool)inlineMapViewControllerDidSelectMap:(id)arg1;
- (bool)isImpressionable;
- (id)location;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViewController;
- (void)setLocation:(id)arg1;
- (void)updateWithMapItem:(id)arg1;

@end
