
@interface HUTitleAsyncValueCell : HUTitleValueCell {
    bool  _showSpinner;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic) bool showSpinner;
@property (retain) UIActivityIndicatorView *spinnerView;

- (void).cxx_destruct;
- (void)createSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinnerView:(id)arg1;
- (bool)showSpinner;
- (id)spinnerView;

@end
