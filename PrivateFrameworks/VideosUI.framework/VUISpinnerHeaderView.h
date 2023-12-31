
@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {
    PSSpecifier * _specifier;
    UIActivityIndicatorView * _spinner;
    UILabel * _text;
}

- (void).cxx_destruct;
- (void)hideSpinner;
- (void)hideText;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)showSpinner;
- (void)showText;

@end
