
@interface MUFooterActionsSectionController : NSObject <MUPlaceSectionControlling> {
    <MKPlaceActionManagerProtocol><MKPlaceActionItemFooterBuilder> * _actionManager;
    bool  _active;
    <MUInfoCardAnalyticsDelegate> * _analyticsDelegate;
    NSArray * _footerActions;
    MUActionGroupSectionView * _footerView;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    MUPlaceCallToActionAppearance * _submissionStatus;
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
- (void)_setupFooterView;
- (id)analyticsDelegate;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (id)draggableContent;
- (bool)hasContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithActionManager:(id)arg1;
- (bool)isActive;
- (void)reloadData;
- (id)revealedAnalyticsModule;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;

@end
