
@interface GKLoadingCell : UICollectionViewCell {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _loading;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *loading;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)awakeFromNib;
- (id)loading;
- (void)setActivityIndicator:(id)arg1;
- (void)setLoading:(id)arg1;

@end
