
@interface MUOfficialAppSectionController : MUPlaceSectionController <MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling> {
    GEOAppleMediaServicesResult * _appStoreApp;
    MUTimeExpirableLRUCache * _cachedMediaResults;
    MUPlaceAppLockupView * _officialAppView;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hydrateViewWithApp;
- (id)_sectionHeaderText;
- (void)_setupLockupView;
- (void)_updateViewWithMediaServicesResult:(id)arg1;
- (int)analyticsModuleType;
- (void)appLockupViewDidSelectPunchOutButton:(id)arg1;
- (bool)hasContent;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1 usingCachedMediaResults:(id)arg2;
- (bool)isImpressionable;
- (id)sectionHeaderViewModel;
- (id)sectionView;

@end
