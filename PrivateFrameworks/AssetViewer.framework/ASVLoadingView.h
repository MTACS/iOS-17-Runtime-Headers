
@interface ASVLoadingView : UIView {
    UILabel * _assetLoadingStatusLabel;
    NSError * _loadingError;
    UIActivityIndicatorView * _spinner;
    unsigned long long  _spinnerColor;
    NSLayoutConstraint * _spinnerLeadingConstraint;
}

@property (nonatomic, retain) NSError *loadingError;
@property (nonatomic) unsigned long long spinnerColor;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateLoadingSpinner;
- (void)_updateLoadingText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadingError;
- (void)setLoadingError:(id)arg1;
- (void)setSpinnerColor:(unsigned long long)arg1;
- (unsigned long long)spinnerColor;

@end
