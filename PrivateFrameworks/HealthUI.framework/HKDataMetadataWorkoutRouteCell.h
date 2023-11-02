
@interface HKDataMetadataWorkoutRouteCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicator;
    <HKDataMetadataWorkoutRouteCellDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _routeImageView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) <HKDataMetadataWorkoutRouteCellDelegate> *delegate;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UIImageView *routeImageView;

- (void).cxx_destruct;
- (void)_handleDidUpdateTraitCollection;
- (id)activityIndicator;
- (id)delegate;
- (id)heightConstraint;
- (id)init;
- (id)routeImageView;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setRouteImage:(id)arg1;
- (void)setRouteImageView:(id)arg1;
- (void)setupConstraints;

@end
