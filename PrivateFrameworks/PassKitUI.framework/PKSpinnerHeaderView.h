
@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic) bool showSpinner;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;

@end
