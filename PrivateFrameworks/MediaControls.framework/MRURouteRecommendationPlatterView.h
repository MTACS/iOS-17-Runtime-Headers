
@interface MRURouteRecommendationPlatterView : UIView {
    UIImageView * _actionImageView;
    MRUActivityRouteView * _activityRouteView;
    MRUNowPlayingLabelView * _labelView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) UIImageView *actionImageView;
@property (nonatomic, readonly) MRUActivityRouteView *activityRouteView;
@property (nonatomic, readonly) MRUNowPlayingLabelView *labelView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;

- (void).cxx_destruct;
- (void)_addLayoutConstraints;
- (id)actionImageView;
- (id)activityRouteView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelView;
- (void)setStylingProvider:(id)arg1;
- (id)stylingProvider;

@end
