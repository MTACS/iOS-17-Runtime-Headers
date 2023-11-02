
@interface MUPlaceRibbonView : UIView <UIScrollViewDelegate> {
    <MUScrollAnalyticActionObserving> * _analyticsDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    MUHairlineView * _bottomHairline;
    MURatingsCallToActionViewModel * _callToActionViewModel;
    MUScrollableStackView * _contentStackView;
    <MUPlaceRibbonViewDelegate> * _delegate;
    MUHairlineView * _topHairline;
    NSArray * _viewModels;
}

@property (nonatomic) <MUScrollAnalyticActionObserving> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceRibbonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showTopAndBottomSeparators;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewModels;

- (void).cxx_destruct;
- (void)_setupStackView;
- (void)_updateAppearance;
- (id)_visibleRibbonItemViews;
- (id)analyticsDelegate;
- (id)delegate;
- (bool)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadVisibility;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModels:(id)arg1;
- (bool)showTopAndBottomSeparators;
- (id)viewModels;

@end
