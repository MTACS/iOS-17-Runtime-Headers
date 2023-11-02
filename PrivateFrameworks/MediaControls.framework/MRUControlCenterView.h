
@interface MRUControlCenterView : UIView {
    UIView * _alertView;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    UIView * _containerView;
    UIView * _contentView;
    double  _cornerRadius;
    UIView * _materialView;
    MRUControlCenterButton * _moreButton;
    MRUControlCenterRouteButton * _routingButton;
    bool  _showAlertView;
    bool  _showMoreButton;
    bool  _showRoutingButton;
    long long  _state;
    MRUVisualStylingProvider * _stylingProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionFrame;
    bool  _transitioning;
}

@property (nonatomic, retain) UIView *alertView;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIView *materialView;
@property (nonatomic, readonly) MRUControlCenterButton *moreButton;
@property (nonatomic, readonly) MRUControlCenterRouteButton *routingButton;
@property (nonatomic) bool showAlertView;
@property (nonatomic) bool showMoreButton;
@property (nonatomic) bool showRoutingButton;
@property (nonatomic) long long state;
@property (nonatomic, readonly) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionFrame;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (id)alertView;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)containerView;
- (id)contentView;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioning;
- (void)layoutSubviews;
- (void)layoutSubviewsHorizontal;
- (void)layoutSubviewsIPad;
- (void)layoutSubviewsVertical;
- (id)materialView;
- (id)moreButton;
- (id)routingButton;
- (void)setAlertView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaterialView:(id)arg1;
- (void)setShowAlertView:(bool)arg1;
- (void)setShowMoreButton:(bool)arg1;
- (void)setShowRoutingButton:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTransitionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitioning:(bool)arg1;
- (bool)showAlertView;
- (bool)showMoreButton;
- (bool)showRoutingButton;
- (long long)state;
- (id)stylingProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionFrame;
- (void)updateCollectionViewContentInset;
- (void)updateVisibility;

@end
