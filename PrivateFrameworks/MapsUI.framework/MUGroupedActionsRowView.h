
@interface MUGroupedActionsRowView : UIView <MUActionRowItemViewDelegate, MUActionRowItemViewModelObserver> {
    NSArray * _actionButtons;
    MUCompositionalStackLayoutGroup * _buttonLayoutGroup;
    MUGroupedActionsRowViewConfiguration * _configuration;
    NSArray * _constraints;
    MUCompositionalStackLayout * _containerStackLayout;
    <MUPlaceCardActionsRowViewDelegate> * _delegate;
    MUFeatureDiscoveryAnnotationView * _featureDiscoveryView;
    NSArray * _viewModels;
}

@property (nonatomic, readonly) NSArray *actionButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceCardActionsRowViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredDistribution;
@property (nonatomic, readonly) long long preferredOrientation;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewModels;

- (void).cxx_destruct;
- (id)_itemViewForViewModel:(id)arg1;
- (void)_setupStackLayout;
- (void)_updateLayoutIfNeeded;
- (id)_viewModelForItemView:(id)arg1;
- (id)actionButtons;
- (void)actionRowItemPresentedMenu:(id)arg1;
- (void)actionRowItemSelected:(id)arg1;
- (void)actionRowItemViewModelDidUpdate:(id)arg1;
- (void)createActionViews;
- (id)delegate;
- (void)didMoveToWindow;
- (void)didUpdateFeatureDiscoveryStatus:(id)arg1;
- (bool)hasContent;
- (id)initWithConfiguration:(id)arg1;
- (long long)preferredDistribution;
- (long long)preferredOrientation;
- (void)setDelegate:(id)arg1;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end
