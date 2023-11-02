
@interface MUAmenitiesSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUAmenityListSectionView * _amenitySectionView;
    GEOBusinessInfoModuleConfiguration * _moduleConfig;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
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
- (void)_setupAmenitiyRows;
- (int)analyticsModuleType;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMapItem:(id)arg1 moduleConiguration:(id)arg2;
- (bool)isImpressionable;
- (id)sectionHeaderViewModel;
- (id)sectionView;

@end
