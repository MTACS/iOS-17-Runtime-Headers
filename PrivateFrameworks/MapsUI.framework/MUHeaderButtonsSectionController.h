
@interface MUHeaderButtonsSectionController : NSObject <MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, MUHeaderButtonsViewDelegate, MUPlaceSectionControlling> {
    bool  _active;
    <MUInfoCardAnalyticsDelegate> * _analyticsDelegate;
    MKPlaceHeaderButtonsViewController * _catalystHeaderViewController;
    UIView * _contentView;
    <MUHeaderButtonsSectionControllerDelegate> * _delegate;
    MKETAProvider * _etaProvider;
    MUHeaderButtonsView * _headerButtonsView;
    MUHeaderButtonsViewConfiguration * _headerConfiguration;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUHeaderButtonsSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryButtonController;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupSectionView;
- (void)_updateWithPreviousState:(bool)arg1;
- (id)alternatePrimaryButtonController;
- (id)analyticsDelegate;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (id)delegate;
- (id)draggableContent;
- (bool)hasContent;
- (void)headerButtonsView:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(id)arg3;
- (void)headerButtonsViewWillPresentMenu:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })impressionsFrame;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithETAProvider:(id)arg1 headerButtonsConfiguration:(id)arg2;
- (bool)isActive;
- (void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3;
- (unsigned long long)primaryButtonType;
- (id)revealedAnalyticsModule;
- (id)secondaryButtonController;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAlternatePrimaryButtonController:(id)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setSecondaryButtonController:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;

@end
