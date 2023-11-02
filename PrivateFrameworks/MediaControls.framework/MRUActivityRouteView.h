
@interface MRUActivityRouteView : UIView {
    MRUActivityArtworkView * _artworkView;
    UIImageView * _deviceIconView;
    NSLayoutConstraint * _deviceIconViewHeightConstraint;
    NSLayoutConstraint * _deviceIconViewWidthConstraint;
    double  _side;
    bool  _sideConstraintActive;
}

@property (nonatomic, readonly) MRUActivityArtworkView *artworkView;
@property (nonatomic, readonly) UIImageView *deviceIconView;
@property (nonatomic, retain) NSLayoutConstraint *deviceIconViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *deviceIconViewWidthConstraint;
@property (nonatomic) double side;
@property (getter=isSideConstraintActive, nonatomic) bool sideConstraintActive;

- (void).cxx_destruct;
- (id)artworkView;
- (id)deviceIconView;
- (id)deviceIconViewHeightConstraint;
- (id)deviceIconViewWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSideConstraintActive;
- (void)setDeviceIconViewHeightConstraint:(id)arg1;
- (void)setDeviceIconViewWidthConstraint:(id)arg1;
- (void)setSide:(double)arg1;
- (void)setSideConstraintActive:(bool)arg1;
- (void)setupConstraints;
- (double)side;

@end
