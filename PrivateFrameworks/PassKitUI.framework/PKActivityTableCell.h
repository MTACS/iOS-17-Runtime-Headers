
@interface PKActivityTableCell : PKTableViewCell {
    UIActivityIndicatorView * _activityIndicator;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;

@end
