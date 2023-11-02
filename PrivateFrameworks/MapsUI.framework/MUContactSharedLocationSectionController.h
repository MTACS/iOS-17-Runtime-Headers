
@interface MUContactSharedLocationSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    MUPlaceDataAvailability * _availability;
    <MUContactSharedLocationSectionControllerDelegate> * _contactSharedLocationSectionDelegate;
    MUContactsViewModelGenerator * _contactViewModelGenerator;
    <_MKPlaceItem> * _placeItem;
    NSMutableArray * _sectionStackViews;
    NSArray * _sectionViews;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) <MUContactSharedLocationSectionControllerDelegate> *contactSharedLocationSectionDelegate;
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
- (void)_buildSections;
- (id)_loadPlaceInfoAddress:(id)arg1 contact:(id)arg2;
- (int)analyticsModuleType;
- (id)contactSharedLocationSectionDelegate;
- (id)draggableContent;
- (bool)hasContent;
- (id)initWithPlaceItem:(id)arg1 availability:(id)arg2;
- (bool)isImpressionable;
- (id)mapItemCoordinateViewModel;
- (id)sectionViews;
- (void)setContactSharedLocationSectionDelegate:(id)arg1;

@end
