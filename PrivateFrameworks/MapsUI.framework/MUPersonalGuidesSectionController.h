
@interface MUPersonalGuidesSectionController : MUPlaceSectionController <MUPlaceSectionControlling, MUPlaceVerticalCardContainerViewDelegate> {
    bool  _active;
    NSDictionary * _collectionViews;
    MUPlaceVerticalCardContainerView * _containerView;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    <MUPersonalGuidesViewProvider> * _viewProvider;
    NSDictionary * _wrappedSectionViewsByIdentifier;
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
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 collectionViewProvider:(id)arg2;
- (bool)isActive;
- (bool)isImpressionable;
- (void)reloadCollectionsAnimated:(bool)arg1;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setActive:(bool)arg1;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)verticalCardContainerView:(id)arg1 shouldHighlightRowAtIndex:(unsigned long long)arg2;

@end
